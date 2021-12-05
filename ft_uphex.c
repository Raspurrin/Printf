/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:10:29 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/05 16:38:02 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>

int32_t	ft_uphex(int32_t nbr, const char *hexbase)
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
		ft_putnbr(nbr / 16, "0123456789ABCDEF");
		ft_putnbr(nbr % 16, "0123456789ABCDEF");
	}
	if (nbr < 10)
	{
		write(1, &hexbase[nbr], 1);
		i++;
	}
	return (i);
}