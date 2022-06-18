/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:56:55 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/11 13:40:36 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*res;

	i = 0;
	j = ft_strlen(s);
	res = malloc(sizeof(char) * j + 1);
	if (res == NULL)
		return (NULL);
	while (i < j)
	{
		res[i] = (*f)(i, *s);
		i++;
		s++;
	}
	res[i] = '\0';
	return (res);
}
