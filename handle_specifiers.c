/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifiers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camille <camille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:31:22 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/03 14:53:08 by camille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_char(va_list args, int *count);
static void	handle_string(va_list args, int *count);

void	handle_specifiers(char spec, va_list args, int *count)
{
	// delegates functions based on the specifier
	if (spec == 'c')
		handle_char(args, count);
	else if (spec == 's')
		handle_string(args, count);
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