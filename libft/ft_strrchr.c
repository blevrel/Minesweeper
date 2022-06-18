/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:24:01 by blevrel           #+#    #+#             */
/*   Updated: 2022/04/11 13:41:15 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_last(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
		if (s[i] == c)
			return (0);
	}
	return (1);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*cast;
	int		last_occ;

	i = 0;
	cast = (char *)s;
	last_occ = 0;
	while (s[i])
	{
		if (cast[i] == (unsigned char)c)
			last_occ = check_last(&cast[i], c);
		if (last_occ == 1)
			return (&cast[i]);
		i++;
	}
	if (c == 0)
		return (&cast[i]);
	else
		return (0);
}
