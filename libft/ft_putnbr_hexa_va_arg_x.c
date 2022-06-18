/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_va_arg_x.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:03:34 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/27 11:38:52 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putnbr_hexa_va_arg_x(va_list ap)
{
	unsigned int	nb;
	int				count;

	nb = va_arg(ap, unsigned int);
	count = 0;
	if (nb >= 16)
	{
		count += ft_putnbr_hexa_x(nb / 16);
		count += ft_putnbr_hexa_x(nb % 16);
	}
	else if (nb >= 10)
		count += ft_putchar(nb + 'W');
	else
		count += ft_putchar(nb + '0');
	return (count);
}
