/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:33:02 by blevrel           #+#    #+#             */
/*   Updated: 2022/03/31 17:32:20 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-' && i++ >= 0)
		sign = -1;
	if (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = (nptr[i] - 48);
		while (nptr[i + 1] >= '0' && nptr[i + 1] <= '9')
		{
			res = (res * 10) + nptr[i + 1] - 48;
			i++;
		}
		return (res * sign);
	}
	return (0);
}
