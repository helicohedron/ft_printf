/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camille <camille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 19:04:40 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/03 20:59:51 by camille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int		ft_printf(const char *string, ...);
int		ft_putchar(const char element);
void	handle_specifiers(char spec, va_list args, int *count);
void    ft_putnbr(long nbr, int *count);
void    ft_puthex(char spec, unsigned int nbr, int *count);

#endif