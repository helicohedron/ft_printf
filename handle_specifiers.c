/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifiers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camille <camille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:31:22 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/03 16:58:22 by camille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_char(va_list args, int *count);
static void	handle_string(va_list args, int *count);
static void	handle_nbrs(va_list args, int *count);

void	handle_specifiers(char spec, va_list args, int *count)
{
	// delegates functions based on the specifier
	if (spec == 'c')
		handle_char(args, count);
	else if (spec == 's')
		handle_string(args, count);
	else if (spec == 'i' || spec == 'd')
		handle_nbrs(args, count);
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