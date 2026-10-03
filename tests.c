/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camille <camille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:29:43 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/03 17:08:16 by camille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	/* */
	// No format specifiers
	ft_printf("Test 0: hello 123\n");
	
	// Printing with %c
	ft_printf("Test 1: hello %c and bear\n", 'C'); 
	
	// Printing with %s
	ft_printf("Test 2: hello %s and bear\n", "CAT");
	
	// Printing with %d
	ft_printf("Test 3: hello %d and bear\n", INT_MIN);

	// Printing with %i
	ft_printf("Test 4: hello %i and bear\n", INT_MAX);

	// Printing with %u
	ft_printf("Test 4: hello %u and bear\n", UINT_MAX);
	return (0);
}