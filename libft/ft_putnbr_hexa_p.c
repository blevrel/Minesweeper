/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:53:10 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/27 10:57:57 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putnbr_hexa_p(unsigned long long nb)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_putnbr_hexa_p(nb / 16);
		count += ft_putnbr_hexa_p(nb % 16);
	}
	else if (nb >= 10)
		count += ft_putchar(nb + 'W');
	else
		count += ft_putchar(nb + '0');
	return (count);
}
