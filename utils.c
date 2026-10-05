/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:36:38 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/05 14:28:26 by jrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	convert_to_hexalpha(char spec, unsigned long nbr); 

int	ft_putchar(const char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putnbr(long nbr, int *count)
{
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		(*count)++;
		nbr *= -1;		
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10, count);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
	(*count)++;	
}

void    ft_puthex(char spec, unsigned long nbr, int *count)
{
	int		rem;
	char	c;
	
	if (nbr > 15)
		ft_puthex(spec, (nbr / 16), count);
	rem = nbr % 16;
	if (rem >= 10 && rem <=15)
		c = convert_to_hexalpha(spec, rem);
	else
		c = rem + '0';
	write (1, &c, 1);
	(*count)++;
}

void	ft_putptr(char spec, unsigned long nbr, int *count)
{
	write (1, "0", 1);
	write (1, "x", 1);
	*count += 2;
	ft_puthex(spec,nbr, count);
}

static char	convert_to_hexalpha(char spec, unsigned long nbr)
{
	if (spec == 'x' || spec == 'p')
		return ('a' + (nbr - 10));
	return ('A' + (nbr - 10));
}

int	ft_putnull(void)
{
	write (1, "(", 1);
	write (1, "n", 1);
	write (1, "i", 1);
	write (1, "l", 1);
	write (1, ")", 1);
	return (5);
}
