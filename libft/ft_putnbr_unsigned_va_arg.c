/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_va_arg.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:05:55 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/27 11:36:41 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putnbr_unsigned_va_arg(va_list ap)
{
	int				count;
	unsigned int	nb;

	nb = va_arg(ap, unsigned int);
	count = 0;
	if (nb >= 10)
	{
		count += ft_putnbr_unsigned(nb / 10);
		count += ft_putnbr_unsigned(nb % 10);
	}
	else
		count += ft_putchar(nb + '0');
	return (count);
}
