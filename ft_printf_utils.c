/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:02:59 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/25 14:19:01 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int(int w)
{
	int	leng;
	int	tmp;

	leng = 0;
	if (w == 0)
		return (write(1, "0", 1));
	if (w == -2147483648)
		return (write(1, "-2147483648", 11));
	if (w < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		leng++;
		w *= -1;
	}
	if (w >= 10)
	{
		tmp = ft_int(w / 10);
		if (tmp == -1)
			return (-1);
		leng += tmp;
	}
	if (write(1, &"0123456789"[w % 10], 1) == -1)
		return (-1);
	return (leng + 1);
}

int	ft_unsigned(unsigned int w)
{
	int	leng;
	int	tmp;

	leng = 0;
	if (w >= 10)
	{
		tmp = ft_unsigned(w / 10);
		if (tmp == -1)
			return (-1);
		leng += tmp;
	}
	if (write(1, &"0123456789"[w % 10], 1) == -1)
		return (-1);
	return (leng + 1);
}

int	ft_string(char *str)
{
	int	i;

	i = -1;
	if (str == NULL)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	while (str[++i])
	{
		if (write(1, &str[i], 1) == -1)
			return (-1);
	}
	return (i);
}

int	ft_hex(unsigned int d, char w)
{
	int	leng;
	int	tmp;

	leng = 0;
	if (d >= 16)
	{
		tmp = ft_hex(d / 16, w);
		if (tmp == -1)
			return (-1);
		leng += tmp;
	}
	if (w == 'X')
	{
		if (write(1, &"0123456789ABCDEF"[d % 16], 1) == -1)
			return (-1);
	}
	if (w == 'x')
	{
		if (write(1, &"0123456789abcdef"[d % 16], 1) == -1)
			return (-1);
	}
	return (leng + 1);
}

int	ft_point(unsigned long w, int i)
{
	int	leng;
	int	tmp;

	leng = 0;
	if (i == 1)
	{
		if (write(1, "0x", 2) == -1)
			return (-1);
		i = 0;
		leng += 2;
	}
	if (w >= 16)
	{
		tmp = ft_point(w / 16, i);
		if (tmp == -1)
			return (-1);
		leng += tmp;
	}
	if (write(1, &"0123456789abcdef"[w % 16], 1) == -1)
		return (-1);
	return (leng + 1);
}
