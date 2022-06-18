/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:24:08 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/11 13:25:58 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (nmemb <= 4294967295 && size <= 4294967295)
	{		
		tab = (void *)malloc(size * nmemb);
		if (tab == NULL)
			return (NULL);
		ft_bzero(tab, nmemb * size);
		return (tab);
	}
	else
		return (0);
}
