/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:29:43 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/05 14:20:00 by jrosette         ###   ########.fr       */
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
	result = printf("Base 1: hello %c and %c\n", 'C', 'B');
	printf("Result: %i\n", result);
	result = ft_printf("Test 1: hello %c and %c\n", 'C', 'B');
	printf("Result: %i\n", result);
	
	// Printing with %s
	printf("\n");
	result = printf("Base 2: hello %s and %s\n", "CAT", "BEAR");
	printf("Result: %i\n", result);
	result = ft_printf("Test 2: hello %s and %s\n", "CAT", "BEAR");
	printf("Result: %i\n", result);
	
	// Printing with %d
	printf("\n");
	result = printf("Base 3: hello %d and %d\n", INT_MIN, INT_MAX);
	printf("Result: %i\n", result);
	result = ft_printf("Test 3: hello %d and %d\n", INT_MIN, INT_MAX);
	printf("Result: %i\n", result);
	
	// Printing with %i
	printf("\n");
	result = printf("Base 4: hello %i and %i\n", INT_MIN, INT_MAX);
	printf("Result: %i\n", result);
	result = ft_printf("Test 4: hello %i and %i\n", INT_MIN, INT_MAX);
	printf("Result: %i\n", result);
	
	// Printing with %u
	printf("\n");
	result = printf("Base 5: hello %u and %u\n", 0, UINT_MAX);
	printf("Result: %i\n", result);	
	result = ft_printf("Test 5: hello %u and %u\n", 0, UINT_MAX);
	printf("Result: %i\n", result);
	
	// Printing with %x
	printf("\n");
	result = printf("Base 6: hello %x and %x\n", 0, UINT_MAX);
	printf("Result: %i\n", result);	
	result = ft_printf("Test 6: hello %x and %x\n", 0, UINT_MAX);
	printf("Result: %i\n", result);
	
	// Printing with %X
	printf("\n");
	result = printf("Base 7: hello %X and %X\n", 42, UINT_MAX);
	printf("Result: %i\n", result);	
	result = ft_printf("Test 7: hello %X and %X\n", 42, UINT_MAX);
	printf("Result: %i\n", result);

	// Printing with %p
	// Test with NULL
	printf("\n");
	int	x;
	result = printf("Base 8: hello %p and bear\n", &x);
	printf("Result: %i\n", result);	
	result = ft_printf("Test 8: hello %p and bear\n", &x);
	printf("Result: %i\n", result);

	printf("\n");
	result = printf("Base 8.1: hello %p and bear\n", NULL);
	printf("Result: %i\n", result);	
	result = ft_printf("Test 8.1: hello %p and bear\n", NULL);
	printf("Result: %i\n", result);
	
	// Printing with %%
	printf("\n");
	result = printf("Base 9: hello %% and bear %%\n");
	printf("Result: %i\n", result);	
	result = ft_printf("Test 9: hello %% and bear %%\n");
	printf("Result: %i\n", result);
	
	return (0);
}