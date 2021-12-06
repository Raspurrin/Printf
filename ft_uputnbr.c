/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:10:29 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/06 00:01:55 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int32_t	ft_uputnbr(uint32_t nbr)
{
	int32_t	i;

	i = 0;
	if (nbr >= 10)
	{
		ft_uputnbr(nbr / 10);
		ft_uputnbr(nbr % 10);
	}
	if (nbr < 10)
	{
		ft_putchar(nbr);
		i++;
	}
	return (i);
}
