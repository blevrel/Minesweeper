/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:13:27 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/05 18:00:21 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*cast_dest;
	const char	*cast_src;
	size_t		i;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (n == 0)
		return (dest);
	cast_dest = dest;
	cast_src = src;
	i = -1;
	if (dest > src)
	{
		while (--n > 0)
			cast_dest[n] = cast_src[n];
		cast_dest[n] = cast_src[n];
	}
	else
	{
		while (++i < n)
			cast_dest[i] = cast_src[i];
	}
	return (dest);
}
