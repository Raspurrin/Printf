/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:10:29 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/16 21:52:29 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int32_t	ft_uphex(uint32_t nbr, const char *hexbase)
{
	int32_t	i;

	i = 0;
	if (nbr >= 16)
	{
		i += ft_uphex(nbr / 16, "0123456789ABCDEF");
		i += ft_uphex(nbr % 16, "0123456789ABCDEF");
	}
	if (nbr < 16)
		i += ft_putchar(hexbase[nbr]);
	return (i);
}
