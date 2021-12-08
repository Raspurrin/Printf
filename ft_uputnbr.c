/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:10:29 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/06 23:37:55 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int32_t	ft_uputnbr(uint32_t nbr)
{
	int32_t	i;
	char	c;

	i = 0;
	if (nbr < 0)
		return (0);
	if (nbr >= 10)
	{
		i += ft_uputnbr(nbr / 10);
		i += ft_uputnbr(nbr % 10);
	}
	if (nbr < 10)
	{
		c = nbr + '0';
		i += ft_putchar(c);
	}
	return (i);
}
