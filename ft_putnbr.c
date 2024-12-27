/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabr <msabr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:17:31 by msabr             #+#    #+#             */
/*   Updated: 2024/11/26 11:17:32 by msabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nbr)
{
	char	*base_decimal;
	int		compt;

	base_decimal = "0123456789";
	compt = 0;
	if (nbr < 0)
	{
		compt += write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		compt += ft_putnbr(nbr / 10);
		compt += ft_putnbr(nbr % 10);
	}
	else
	{
		compt += ft_putchar(base_decimal[nbr]);
	}
	return (compt);
}
