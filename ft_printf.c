/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabr <msabr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:51:03 by msabr             #+#    #+#             */
/*   Updated: 2024/12/03 20:46:53 by msabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format_printf(char Format_type, va_list list)
{
	int	compt;

	compt = 0;
	if (Format_type == 'c')
		compt += ft_putchar(va_arg(list, int));
	else if (Format_type == 's')
		compt += ft_putstr(va_arg(list, char *));
	else if (Format_type == 'd' || Format_type == 'i')
		compt += ft_putnbr(va_arg(list, int));
	else if (Format_type == 'x' || Format_type == 'X')
		compt += ft_puthexnbr(va_arg(list, unsigned int), Format_type);
	else if (Format_type == 'p')
		compt += ft_putadress(va_arg(list, unsigned long));
	else if (Format_type == '%')
		compt += ft_putchar('%');
	else if (Format_type == 'u')
		compt += ft_putunsigned(va_arg(list, unsigned int));
	else
		compt += write(1, &Format_type, 1);
	return (compt);
}

int	ft_printf(const char *format_type, ...)
{
	va_list	list;
	int		compt;
	int		i;

	if (write (1, "", 0) == -1)
		return (-1);
	va_start(list, format_type);
	compt = 0;
	i = 0;
	while (format_type[i])
	{
		if (format_type[i] == '%')
			compt += ft_format_printf(format_type[++i], list);
		else
			compt += ft_putchar(format_type[i]);
		if (!format_type[i])
			return (compt - 1);
		i++;
	}
	va_end(list);
	return (compt);
}
