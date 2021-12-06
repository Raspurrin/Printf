/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:24:16 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/06 21:21:17 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

/**
 * Recreating the printf function
 * @param str string to print out characters from and if a % is encountered
 * the next variadic variable encountered is converted and printed out 
 * @param ... variable length arguments, it can take any number of arguments
 * @return int32_t the amount of characters printed
 */
int32_t	ft_printf(const char *str, ...);

/**
 * Converting signed integers and writing them on stdout
 * @param nbr The number
 * @return int32_t length of nbr
 */
int32_t	ft_putnbr(int32_t nbr, char c);

/**
 * Converting unsigned integers and writing them on stdout
 * @param nbr The number
 * @return int32_t length of nbr
 */
int32_t	ft_uputnbr(uint32_t nbr);

/**
 * converts a number to hexidecimal and prints it in lowercase
 * @param nbr number to be converted
 * @param hexbase the hexidecimal base to be used
 * @return int32_t length of the hexidecmal number
 */
int32_t	ft_hex(uint64_t nbr, const char *hexbase);

/**
 * converts a number to hexidecimal and prints it in uppercase
 * @param nbr number to be converted
 * @param hexbase the hexidecimal base to be used
 * @return int32_t length of the hexidecmal number
 */
int32_t	ft_uphex(uint64_t nbr, const char *hexbase);

/**
 * Prints out a string to stdout
 * @param str the string
 * @return int32_t length of the string
 */
int32_t	ft_putstr(char *str);

/**
 * Prints out a character to stdout
 * @param c the character
 * @return int32_t length of the character
 */
int32_t	ft_putchar(char c);

/**
 * Prints out the memory adress held by the pointer
 * @param ptr The pointer
 * @param hexbase The hexidecimal base to be used
 * @return the length of the memory adress
 */
int32_t	ft_putmem(void *ptr, const char *hexbase);

#endif