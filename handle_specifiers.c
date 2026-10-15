/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifiers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:31:22 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/06 19:57:14 by jrosette         ###   ########.fr       */
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
static void	handle_char(char spec, va_list args, int *count);
static void	handle_string(char spec, va_list args, int *count);
static void	handle_nbrs(char spec, va_list args, int *count);
static void	handle_ptr(char spec, va_list args, int *count);

void	handle_specifiers(char spec, va_list args, int *count)
{
	if (spec == 'c')
		handle_char(spec, args, count);
	else if (spec == 's')
		handle_string(spec, args, count);
	else if (spec == 'i' || spec == 'd')
		handle_nbrs(spec, args, count);
	else if (spec == 'u')
		handle_nbrs(spec, args, count);
	else if (spec == 'x' || spec == 'X')
		handle_nbrs(spec, args, count);
	else if (spec == 'p')
		handle_ptr(spec, args, count);
	else if (spec == '%')
		handle_char(spec, args, count);
	else
		*count *= -1;
}

static void	handle_char(char spec, va_list args, int *count)
{
	char	c;

	if (spec != '%')
	{
		c = va_arg(args, int);
		*count += ft_putchar(c);
	}
	else
		*count += ft_putchar('%');
}

static void	handle_string(char spec, va_list args, int *count)
{
	int		i;
	char	*string;

	string = va_arg(args, char *);
	i = 0;
	if (string == (char *) NULL)
		*count += ft_putnull(spec);
	else
	{
		while (string[i])
		{
			*count += ft_putchar(string[i]);
			i++;
		}
	}
}

static void	handle_nbrs(char spec, va_list args, int *count)
{
	int				nbr;
	unsigned int	unbr;

	if (spec == 'i' || spec == 'd')
	{
		nbr = va_arg(args, int);
		ft_putnbr(nbr, count);
	}
	else if (spec == 'u')
	{
		unbr = va_arg(args, unsigned int);
		ft_putnbr(unbr, count);
	}
	else if (spec == 'x' || spec == 'X')
	{
		unbr = va_arg(args, unsigned int);
		ft_puthex(spec, unbr, count);
	}
}

static void	handle_ptr(char spec, va_list args, int *count)
{
	void	*nbr;

	nbr = va_arg(args, void *);
	if (nbr == NULL)
		*count += ft_putnull(spec);
	else
	{
		write (1, "0", 1);
		write (1, "x", 1);
		*count += 2;
		ft_putptr(spec, (unsigned long)nbr, count);
	}
}
