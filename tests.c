/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camille <camille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:29:43 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/03 20:47:16 by camille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	result;
	/* */
	// No format specifiers
	result = printf("Base 0: hello 123\n");
	printf("Result: %i\n", result);
	result = ft_printf("Test 0: hello 123\n");
	printf("Result: %i\n", result);
	
	// Printing with %c
	printf("\n");
	result = printf("Base 1: hello %c and bear\n", 'C');
	printf("Result: %i\n", result);
	result = ft_printf("Test 1: hello %c and bear\n", 'C');
	printf("Result: %i\n", result);
	
	// Printing with %s
	printf("\n");
	result = printf("Base 2: hello %s and bear\n", "CAT");
	printf("Result: %i\n", result);
	result = ft_printf("Test 2: hello %s and bear\n", "CAT");
	printf("Result: %i\n", result);
	
	// Printing with %d
	printf("\n");
	result = printf("Base 3: hello %d and bear\n", INT_MIN);
	printf("Result: %i\n", result);
	result = ft_printf("Test 3: hello %d and bear\n", INT_MIN);
	printf("Result: %i\n", result);
	
	// Printing with %i
	printf("\n");
	result = printf("Base 4: hello %i and bear\n", INT_MAX);
	printf("Result: %i\n", result);
	result = ft_printf("Test 4: hello %i and bear\n", INT_MAX);
	printf("Result: %i\n", result);
	
	// Printing with %u
	printf("\n");
	result = printf("Base 5: hello %u and bear\n", UINT_MAX);
	printf("Result: %i\n", result);	
	result = ft_printf("Test 5: hello %u and bear\n", UINT_MAX);
	printf("Result: %i\n", result);
	
	// Printing with %x
	printf("\n");
	result = printf("Base 6: hello %x and bear\n", UINT_MAX);
	printf("Result: %i\n", result);	
	result = ft_printf("Base 6: hello %x and bear\n", UINT_MAX);
	printf("Result: %i\n", result);
	
	// Printing with %X
	printf("\n");
	result = printf("Base 7: hello %X and bear\n", UINT_MAX);
	printf("Result: %i\n", result);	
	result = ft_printf("Base 7: hello %X and bear\n", UINT_MAX);
	printf("Result: %i\n", result);
	
	// Printing for multiple specifiers
	// Test for count
	
	return (0);
}