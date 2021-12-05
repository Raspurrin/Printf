/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:10:29 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/05 02:42:37 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>

int32_t	ft_putnbr(int32_t nbr, char c)
{
	int32_t	i;

	i = 0;
	if (nbr == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return (11);
	}
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1);
		nbr = ft_abs(nbr);
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10, c);
		ft_putnbr(nbr % 10, c);
	}
	if (nbr < 10 && nbr != 2147483648)
	{
		c = nbr + '0';
		write(1, &c, 1);
		i++;
	}
	return (i);
}
