/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camille <camille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:29:43 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/03 20:28:47 by camille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	/* */
	// No format specifiers
	printf("Base 0: hello 123\n");
	ft_printf("Test 0: hello 123\n");
	
	// Printing with %c
	printf("\n");
	printf("Base 1: hello %c and bear\n", 'C');
	ft_printf("Test 1: hello %c and bear\n", 'C'); 
	
	// Printing with %s
	printf("\n");
	printf("Base 2: hello %s and bear\n", "CAT");
	ft_printf("Test 2: hello %s and bear\n", "CAT");
	
	// Printing with %d
	printf("\n");
	printf("Base 3: hello %d and bear\n", INT_MIN);
	ft_printf("Test 3: hello %d and bear\n", INT_MIN);

	// Printing with %i
	printf("\n");
	printf("Base 4: hello %i and bear\n", INT_MAX);
	ft_printf("Test 4: hello %i and bear\n", INT_MAX);

	// Printing with %u
	printf("\n");
	printf("Base 5: hello %u and bear\n", UINT_MAX);
	ft_printf("Test 5: hello %u and bear\n", UINT_MAX);

	// Printing with %x
	printf("\n");
	printf("Base 6: hello %x and bear\n", UINT_MAX);
	ft_printf("Base 6: hello %x and bear\n", UINT_MAX);

	// Printing with %X
	printf("\n");
	printf("Base 7: hello %X and bear\n", UINT_MAX);
	ft_printf("Base 7: hello %X and bear\n", UINT_MAX);
	return (0);
}