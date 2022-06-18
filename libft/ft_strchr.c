/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:12:44 by blevrel           #+#    #+#             */
/*   Updated: 2022/03/31 12:02:37 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*cast;

	i = 0;
	cast = (char *)s;
	while (s[i])
	{
		if (cast[i] == (unsigned char)c)
			return (&cast[i]);
		i++;
	}
	if (c == 0)
		return (&cast[i]);
	else
		return (0);
}
