/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:52:16 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/04 15:34:33 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cast_s;
	size_t			i;

	i = 0;
	cast_s = (unsigned char *) s;
	while (i < n)
	{
		if (cast_s[i] == (unsigned char)c)
			return (&cast_s[i]);
		i++;
	}
	if (c == 0 && n != 0)
		return (&cast_s[i]);
	return (0);
}
