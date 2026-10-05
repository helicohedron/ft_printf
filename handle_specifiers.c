/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifiers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:31:22 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/05 14:19:32 by jrosette         ###   ########.fr       */
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
static void	handle_ptr(char spec, va_list args, int *count);
static void	handle_perc(int *count);

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
		handle_ptr(spec, args, count);
	else if (spec == '%')
		handle_perc(count);
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
	unsigned long	nbr;
	
	nbr = va_arg(args, unsigned long);
	ft_puthex(spec, nbr, count);
}

static void	handle_ptr(char spec, va_list args, int *count)
{
	void	*nbr;
	
	nbr = va_arg(args, void *);
	if (nbr == NULL)
		*count += ft_putnull();
	else
		ft_putptr(spec, (unsigned long)nbr, count);
}

static void	handle_perc(int *count)
{
	*count += ft_putchar('%');
}