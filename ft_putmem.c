/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:01:19 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/18 22:50:38 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int32_t	ft_putmem(size_t *ptr, const char *hexbase)
{
	if (!ptr)
		return (ft_putstr("0x0"));
	return (ft_putstr("0x") + ft_hex((uint64_t)ptr, hexbase));
}
