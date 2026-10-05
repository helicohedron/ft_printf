/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 19:04:40 by jrosette          #+#    #+#             */
/*   Updated: 2026/10/05 14:28:36 by jrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int		ft_printf(const char *string, ...);
int		ft_putchar(const char c);
void	handle_specifiers(char spec, va_list args, int *count);
void    ft_putnbr(long nbr, int *count);
void    ft_puthex(char spec, unsigned long nbr, int *count);
void	ft_putptr(char spec, unsigned long nbr, int *count);
int		ft_putnull(void);

#endif