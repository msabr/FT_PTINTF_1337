/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabr <msabr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:16:31 by msabr             #+#    #+#             */
/*   Updated: 2024/12/03 20:42:09 by msabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_digit(unsigned long n)
{
	int		compt;
	char	*base_hexa;

	compt = 0;
	base_hexa = "0123456789abcdef";
	if (n >= 16)
	{
		compt += hex_digit(n / 16);
		compt += hex_digit(n % 16);
	}
	else
	{
		compt += write(1, &base_hexa[n], 1);
	}
	return (compt);
}

int	ft_putadress(unsigned long point)
{
	int	compt;

	compt = 0;
	compt += write(1, "0x", 2);
	if (point == 0)
		compt += write(1, "0", 1);
	else
		compt += hex_digit(point);
	return (compt);
}
