/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:25:40 by blevrel           #+#    #+#             */
/*   Updated: 2022/03/31 15:11:28 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;

	i = 0;
	cast_s1 = (unsigned char *) s1;
	cast_s2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (i < n && cast_s1[i] == cast_s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (cast_s1[i] - cast_s2[i]);
}
