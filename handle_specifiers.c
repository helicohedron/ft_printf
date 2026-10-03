/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifiers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camille <camille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:31:22 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/03 21:18:38 by camille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
%c  → int
%s  → char *
%d  → int
%i  → int
%u  → unsigned int
%x  → unsigned int
%X  → unsigned int
%p  → void *
%%  → int?
*/
static void	handle_char(va_list args, int *count);
static void	handle_string(va_list args, int *count);
static void	handle_nbrs(va_list args, int *count);
static void	handle_unbrs(va_list args, int *count);
static void	handle_hex(char spec, va_list args, int *count);
static void	handle_ptr(va_list args, int *count);

void	handle_specifiers(char spec, va_list args, int *count)
{
	// delegates functions based on the specifier
	if (spec == 'c')
		handle_char(args, count);
	else if (spec == 's')
		handle_string(args, count);
	else if (spec == 'i' || spec == 'd')
		handle_nbrs(args, count);
	else if (spec == 'u')
		handle_unbrs(args, count);
	else if (spec == 'x' || spec == 'X')
		handle_hex(spec, args, count);
	else if (spec == 'p')
		handle_ptr(args, count);
	// else -> how to handle errors?
}

static void	handle_char(va_list args, int *count)
{
	char	c;
	c = va_arg(args, int);
	*count += ft_putchar(c);
}

static void	handle_string(va_list args, int *count)
{
	int		i;
	char	*string;

	string = va_arg(args, char *);
	i = 0;
	while (string[i])
	{
		*count += ft_putchar(string[i]);
		i++;
	}	
}

static void	handle_nbrs(va_list args, int *count)
{
	int	nbr;
	
	nbr = va_arg(args, int);
	ft_putnbr(nbr, count);
}

static void	handle_unbrs(va_list args, int *count)
{
	unsigned int	nbr;
	
	nbr = va_arg(args, unsigned int);
	ft_putnbr(nbr, count);
}

static void	handle_hex(char spec, va_list args, int *count)
{
	unsigned int	nbr;
	
	nbr = va_arg(args, unsigned int);
	ft_puthex(spec, nbr, count);
}

// in the works
static void	handle_ptr(va_list args, int *count)
{
	char	*string;
	int		i;
	
	string = va_arg(args, void *);
	i = 0;
	while (string[i])
	{
		*count += ft_putchar(&(string[i]));
		i++;
	}
}