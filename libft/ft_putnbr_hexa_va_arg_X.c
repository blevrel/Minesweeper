/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_va_arg_X.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:52:59 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/27 11:36:22 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putnbr_hexa_va_arg_up(va_list ap)
{
	unsigned int	nb;
	int				count;

	nb = va_arg(ap, int);
	count = 0;
	if (nb >= 16)
	{
		count += ft_putnbr_hexa_up(nb / 16);
		count += ft_putnbr_hexa_up(nb % 16);
	}
	else if (nb >= 10)
		count += ft_putchar(nb + '7');
	else
		count += ft_putchar(nb + '0');
	return (count);
}
