/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:02:25 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/25 14:02:32 by deryacar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char x);
int	ft_format(va_list *args, char w);
int	ft_int(int w);
int	ft_unsigned(unsigned int w);
int	ft_string(char *str);
int	ft_hex(unsigned int d, char w);
int	ft_point(unsigned long w, int i);
int	ft_check(char str);
#endif
