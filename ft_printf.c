/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:10:17 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/06 22:26:03 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static	int32_t	ft_cases(const char chr, va_list argp, int32_t count)
{
	char	c;

	c = 0;
	if (chr == 'c')
		count += ft_putchar(va_arg(argp, int32_t));
	if (chr == 's')
		count += ft_putstr(va_arg(argp, char *));
	if (chr == '%')
		count += ft_putchar('%');
	if (chr == 'i' || chr == 'd')
		count += ft_putnbr(va_arg(argp, int32_t), c);
	if (chr == 'u')
		count += ft_uputnbr(va_arg(argp, int32_t));
	if (chr == 'p')
		count += ft_putmem(va_arg(argp, void *), "0123456789ABCDEF");
	if (chr == 'x')
		count += ft_hex(va_arg(argp, uint64_t), "0123456789abcdef");
	if (chr == 'X')
		count += ft_uphex(va_arg(argp, uint64_t), "0123456789ABCDEF");
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
			str++;
		}
		else
		{
			count += ft_putchar(*str);
			str++;
		}
	}
	return (count);
}

int	main(void)
{
	char	name[] = "Leon";

	ft_printf("\t%d\n", ft_printf("hello, %s eyooo %d %p", name, 166, name));
	printf("\t%d\n", printf("hello, %s eyooo %d %p", name, 166, name));
	return (0);
}
