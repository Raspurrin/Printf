/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:10:29 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/06 00:00:45 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int32_t	ft_uphex(int32_t nbr, const char *hexbase)
{
	int32_t	i;

	i = 0;
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_uphex(nbr / 16, "0123456789ABCDEF");
		ft_uphex(nbr % 16, "0123456789ABCDEF");
	}
	if (nbr < 10)
	{
		ft_putchar(hexbase[nbr]);
		i++;
	}
	return (i);
}
