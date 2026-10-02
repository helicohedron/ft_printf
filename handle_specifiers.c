/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifiers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:31:22 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/02 20:53:02 by jrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_char(va_list args, int *count);

void	handle_specifiers(char spec, va_list args, int *count)
{
	// delegates functions based on the specifier
	if (spec == 'c')
		handle_char(args, count);
}

static void	handle_char(va_list args, int *count)
{
	char	c;
	c = va_arg(args, int);
	*count += ft_putchar(c);
}