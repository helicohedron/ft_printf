/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camille <camille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:29:43 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/03 14:46:40 by camille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
    // No format specifiers
    ft_printf("hello 123\n");
    
    // Printing with %c
	ft_printf("hello %c 123", 'E'); 
	return (0);
}