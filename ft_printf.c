/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camille <camille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:27:47 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/03 14:44:35 by camille          ###   ########.fr       */
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
	int		char_count;
	int		i;
	va_list args;
	
	i = 0;
	char_count = 0;
	va_start(args, string);
	while (string[i])
	{
		if (string[i] == '%')
		{
			i++;
			if (string[i] == '\0')
				return (-1);
			else
			{
                handle_specifiers(string[i], args, &char_count);
                i++;                
            }
		}
		char_count += ft_putchar(string[i]);
		i++;
	}
	va_end(args);
	return (char_count);
}

