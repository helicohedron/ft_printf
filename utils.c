/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camille <camille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:36:38 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/03 20:43:34 by camille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	convert_to_hexalpha(char spec, unsigned int nbr); 

int	ft_putchar(const char element)
{
	int	fd;

	fd = 1;
	write(fd, &element, 1);
	return (1);
}

void	ft_putnbr(long nbr, int *count)
{
	int		fd;
	char	c;

	fd = 1;
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
}

void    ft_puthex(char spec, unsigned int nbr, int *count)
{
	int		fd;
	int		rem;
	char	c;
	
	fd = 1;
	if (nbr > 15)
		ft_puthex(spec, (nbr / 16), count);
	rem = nbr % 16;
	if (rem >= 10 && rem <=15)
		c = convert_to_hexalpha(spec, rem);
	else
		c = rem + '0';
	write (fd, &c, 1);
	(*count)++;
}

static char	convert_to_hexalpha(char spec, unsigned int nbr)
{
	if (spec == 'x')
		return ('a' + (nbr - 10));
	return ('A' + (nbr - 10));
}
