/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:27:47 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/02 19:08:24 by jrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Return value of ft_printf is an int
	*Positive return value - operation successful, indicates # of chars written
	*Negative return value - error
*/

#include "ft_printf.h"

int	ft_printf(const char *string, ...)
{
	int		result;
	va_list args;
	
	va_start(args, string);
	while (string)
	{
		result += putchar_count(string);
		string = va_arg(args, const char *);
	}
	va_end(args);
	return (result);
}

static int	putchar_count(char *string)
{
	int	i;
	int	fd;

	fd = 1;
	i = 0;
	while (string[i])
	{
		write(fd, &string[i], 1);
		i++;
	}
	return (i);
}