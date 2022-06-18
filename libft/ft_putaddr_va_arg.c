/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_va_arg.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:51:21 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/27 11:37:44 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putaddr_va_arg(va_list ap)
{
	void	*ptr;
	int		count;

	count = 0;
	ptr = va_arg(ap, void *);
	if (!ptr)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	count += ft_putnbr_hexa_p((unsigned long long)ptr);
	count += 2;
	return (count);
}
