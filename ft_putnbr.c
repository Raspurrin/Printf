/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:10:29 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/16 21:52:29 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int32_t	ft_putnbr(int32_t nbr, char c)
{
	int32_t	i;

	i = 0;
	if (nbr == -2147483648)
	{
		i += ft_putstr("-2147483648");
		return (11);
	}
	if (nbr < 0)
	{
		i += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		i += ft_putnbr(nbr / 10, c);
		i += ft_putnbr(nbr % 10, c);
	}
	if (nbr < 10 && nbr != -2147483648)
	{
		c = nbr + '0';
		i += ft_putchar(c);
	}
	return (i);
}
