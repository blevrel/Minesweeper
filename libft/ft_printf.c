/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:41:11 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/27 11:41:12 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_percent(const char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar_va_arg(ap);
	else if (c == 's')
		count = ft_putstr_va_arg(ap);
	else if (c == 'p')
		count = ft_putaddr_va_arg(ap);
	else if (c == 'd' || c == 'i')
		count = ft_putnbr_va_arg(ap);
	else if (c == 'u')
		count = ft_putnbr_unsigned_va_arg(ap);
	else if (c == 'x')
		count = ft_putnbr_hexa_va_arg_x(ap);
	else if (c == 'X')
		count = ft_putnbr_hexa_va_arg_up(ap);
	else if (c == '%')
	{
		ft_putchar(c);
		count++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += check_percent(format[i + 1], ap);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
