/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:10:17 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/16 19:55:38 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int32_t	ft_cases(const char chr, va_list argp, int32_t count)
{
	if (!argp)
		return (0);
	if (chr == 'c')
		count += ft_putchar(va_arg(argp, int32_t));
	if (chr == 's')
		count += ft_putstr(va_arg(argp, char *));
	if (chr == '%')
		count += ft_putchar('%');
	if (chr == 'i' || chr == 'd')
		count += ft_putnbr(va_arg(argp, int32_t), 0);
	if (chr == 'u')
		count += ft_uputnbr(va_arg(argp, uint32_t));
	if (chr == 'p')
		count += ft_putmem(va_arg(argp, size_t *), "0123456789abcdef");
	if (chr == 'x')
		count += ft_hex(va_arg(argp, uint32_t), "0123456789abcdef");
	if (chr == 'X')
		count += ft_uphex(va_arg(argp, uint32_t), "0123456789ABCDEF");
	return (count);
}

int32_t	ft_printf(const char *str, ...)
{
	va_list	argp;
	size_t	count;

	count = 0;
	va_start(argp, str);
	while (*str)
	{
		if (*str == '%')
		{	
			str++;
			count = ft_cases(*str, argp, count);
		}
		else
			count += ft_putchar(*str);
		str++;
	}
	return (count);
}
