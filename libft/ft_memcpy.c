/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:59:16 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/05 11:32:52 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*cast_dest;
	char		*cast_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	cast_dest = (char *)dest;
	cast_src = (char *)src;
	while (n--)
	{
		*cast_dest = *cast_src;
		cast_dest++;
		cast_src++;
	}
	return (dest);
}
