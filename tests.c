/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camille <camille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:29:43 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/03 14:54:32 by camille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	// No format specifiers
	ft_printf("Test 0: hello 123\n");
	
	// Printing with %c
	ft_printf("Test 1: hello %c 123\n", 'C'); 

	// Printing with %s
	ft_printf("Test 2: hello %s 123\n", "CAT"); 
	return (0);
}