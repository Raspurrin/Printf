/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:10:29 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/05 02:59:58 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>

int32_t	ft_hex(int32_t nbr, const char *hexbase)
{
	int32_t	i;

	if (nbr >= 10)
	{
		ft_hex(nbr / 16, "0123456789abcdef");
		ft_hex(nbr % 16, "0123456789abcdef");
	}
	if (nbr < 10)
	{
		write(1, &hexbase[nbr], 1);
		i++;
	}
	return (i);
}
