/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camille <camille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:36:38 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/03 16:44:22 by camille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(const char element)
{
	int	fd;

	fd = 1;
	write(fd, &element, 1);
	return (1);
}

int	ft_putnbr(int nbr, int *count)
{
	int		fd;
	char	c;

	fd = 1;
	// INT_MIN issue
	if (nbr < 0)
	{
		write(fd, "-", 1);
		(*count)++;	
		nbr *= -1;		
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10, count);
	c = (nbr % 10) + '0';
	write(fd, &c, 1);
	(*count)++;	
	return (0);
}
