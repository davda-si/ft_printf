/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davda-si <davda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:46:01 by davda-si          #+#    #+#             */
/*   Updated: 2023/07/03 16:48:20 by davda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

int		ft_args(char str, va_list ap);
int		ft_hex(unsigned int n, char *b);
int		ft_point(void *nmb, char *b);
int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putnbr(long int c);
size_t	ft_putstr(char *s);
char	*hex_str(unsigned int n, char *b);

#endif