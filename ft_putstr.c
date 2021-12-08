/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:21:02 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/06 23:25:17 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static	size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int32_t	ft_putstr(char *str)
{
	int32_t	len;

	if (!str)
		return (ft_putstr("(null)"));
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}
