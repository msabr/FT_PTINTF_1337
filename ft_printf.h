/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabr <msabr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:49:00 by msabr             #+#    #+#             */
/*   Updated: 2024/11/26 11:05:13 by msabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putstr(char *str);
int	ft_putnbr(long number);
int	ft_puthexnbr(unsigned int nbr, char x);
int	ft_putunsigned(unsigned int nbr);
int	ft_putchar(int c);
int	ft_putadress(unsigned long point);

#endif
