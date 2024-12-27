/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabr <msabr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:17:17 by msabr             #+#    #+#             */
/*   Updated: 2024/11/26 11:20:56 by msabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexnbr(unsigned int nbr, char x)
{
	char	*base_hexa;
	int		count;

	if (x == 'X')
		base_hexa = "0123456789ABCDEF";
	else
		base_hexa = "0123456789abcdef";
	count = 0;
	if (nbr >= 16)
		count += ft_puthexnbr(nbr / 16, x);
	count += write(1, &base_hexa[nbr % 16], 1);
	return (count);
}
