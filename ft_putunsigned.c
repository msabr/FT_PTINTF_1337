/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabr <msabr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:17:41 by msabr             #+#    #+#             */
/*   Updated: 2024/12/07 18:28:19 by msabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nbr)
{
	int		compt;
	char	*base_int;

	base_int = "0123456789";
	if (nbr >= 10)
	{
		compt = ft_putnbr(nbr / 10);
		return (compt + ft_putnbr(nbr % 10));
	}
	else
	{
		return (ft_putchar(base_int[nbr]));
	}
}
