/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 08:55:34 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/26 18:22:53 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putnbr_hexa_x(unsigned int nb)
{
	int	count;

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
