/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:11:57 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/11 13:29:56 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

static int	find_size(int n)
{
	int	i;
	int	res;

	i = 1;
	res = 0;
	while (n > 9 || n < -9)
	{
		res = n / 10;
		n = res;
		i++;
	}
	return (i);
}

static char	*ft_strdup_loc(const char *s)
{
	int		i;
	char	*dup;
	int		len;

	i = 0;
	len = 0;
	while (s[i])
	{
		len++;
		i++;
	}
	i = 0;
	dup = malloc(len + 1 * sizeof(char));
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static void	*ft_calloc_loc(size_t nmemb, size_t size, int n)
{
	void	*tab;

	if (n >= 0)
	{
		tab = (void *)malloc(size * nmemb);
		if (tab == NULL)
			return (NULL);
		ft_bzero(tab, nmemb * size);
	}
	else
	{
		tab = (void *)malloc(size * nmemb + 1);
		if (tab == NULL)
			return (NULL);
		ft_bzero(tab, nmemb * size + 1);
	}
	return (tab);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	size;
	int		nbr;

	size = find_size(n);
	if (n == -2147483648)
		return (ft_strdup_loc("-2147483648"));
	res = ft_calloc_loc(size + 1, 1, n);
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (size > 0)
	{
		nbr = n % 10;
		res[size - 1] = nbr + 48;
		n = n / 10;
		size--;
	}
	if (res[size] == '0' && res[size + 1] != '\0')
		res[size] = '-';
	return (res);
}
