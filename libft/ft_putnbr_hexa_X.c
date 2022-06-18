/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_X.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 08:55:34 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/27 11:32:24 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putnbr_hexa_up(unsigned int nb)
{
	int	count;

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
