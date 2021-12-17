/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:01:19 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/17 12:04:14 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int32_t	ft_putmem(size_t *ptr, const char *hexbase)
{
	int32_t	i;
	size_t	ptr2;

	i = 0;
	ptr2 = (size_t)ptr;
	if (!ptr)
		return (ft_putstr("0x0"));
	return (ft_putstr("0x") + ft_hex2((uint64_t)ptr, hexbase));
}
