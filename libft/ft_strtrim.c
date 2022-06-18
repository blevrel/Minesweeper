/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 08:26:07 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/11 13:41:34 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

static int	check_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	beg;
	size_t	end;

	i = 0;
	beg = 0;
	end = 0;
	while (s1[end] && check_set(s1[end++], set) == 1)
		beg++;
	while (s1[end])
		end++;
	while (end > beg && check_set(s1[end - 1], set) == 1)
		end--;
	res = malloc(sizeof(char) * (end - beg) + 1);
	if (res == NULL)
		return (NULL);
	while (beg < end)
	{
		res[i] = s1[beg];
		i++;
		beg++;
	}
	res[i] = '\0';
	return (res);
}
