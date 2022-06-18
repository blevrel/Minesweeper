/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:46:26 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/06 14:13:27 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

static void	*ft_calloc_loc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	i;
	char	*cast;

	i = 0;
	tab = (void *)malloc(size * nmemb);
	cast = tab;
	if (tab == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		cast[i] = '1';
		i++;
	}
	return (tab);
}

static int	count_malloc(char const *s, char sep)
{
	int		i;
	int		count;
	int		trigger;

	i = 0;
	count = 0;
	trigger = 1;
	while (s[i])
	{
		if (s[i] == sep && trigger == 1)
			i++;
		else if (s[i] == sep && trigger == 0)
		{
			trigger = 1;
			count++;
			i++;
		}
		else if (s[i] != sep)
		{
			if (s[++i] == '\0')
				count++;
			trigger = 0;
		}
	}
	return (count);
}

static char	**size_malloc(char const *s, char sep, char **res)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] == sep)
			i++;
		else if (s[i] != sep)
		{
			while (s[i] != sep && s[i])
			{
				i++;
				j++;
			}
			res[k] = ft_calloc_loc(j + 1, sizeof(char));
			res[k][j] = '\0';
			k++;
		}
	}
	return (res);
}

static char	**fill_tab(char const *s, char sep, char **res)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] == sep)
			i++;
		else if (s[i] != sep)
		{
			while (s[i] != sep && res[k][j])
			{
				res[k][j] = s[i];
				i++;
				j++;
			}
			k++;
		}
	}
	res[k] = 0;
	return (res);
}

char	**ft_split(char *s, char c)
{
	char	**res;

	if (count_malloc(s, c) == 0)
	{
		res = malloc(sizeof(char *));
		res[0] = NULL;
		return (res);
	}
	res = ft_calloc_loc(count_malloc(s, c) + 1, sizeof(char *));
	if (res == NULL)
		return (NULL);
	res = size_malloc(s, c, res);
	res = fill_tab(s, c, res);
	return (res);
}
