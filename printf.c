/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:10:17 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/05 22:24:05 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>

static	int32_t	ft_cases(const char chr, va_list argp)
{
	size_t	count;
	char	c;

	if (chr == 'c')
		count = ft_putchar(va_arg(argp, int));
	if (chr == 's')
		count = ft_putstr_fd(va_arg(argp, char *), 1);
	if (chr == '%')
		count = ft_putchar_fd('%', 1);
	if (chr == 'i' || chr == 'd')
		count = ft_putnbr(va_arg(argp, int), c);
	if (chr == 'u')
		count = ft_uputnbr(va_arg(argp, int));
	if (chr == 'p')
		count = ft_putmem(va_arg(argp, int));
	if (chr == 'x')
		count = ft_hex(va_arg(argp, char *), "0123456789abcdef");
	if (chr == 'X')
		count = ft_uphex(va_arg(argp, char *), "0123456789ABCDEF");
	return (count);
}

int32_t	printf(const char *str, ...)
{
	size_t	i;
	va_list	argp;
	size_t	count;

	i = 0;
	count = 0;
	va_start(argp, str);
	while (*str)
	{
		if (*str++ == '%')
			count = ft_cases(*str, argp);
		else
			count = ft_putchar_fd(*str, 1);
	}
	return (count);
}

int	main(void)
{
	return (0);
}
