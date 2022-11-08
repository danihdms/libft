/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaydamo <dhaydamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:14:00 by dhaydamo          #+#    #+#             */
/*   Updated: 2022/11/08 20:33:47 by dhaydamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static int	get_nb_digits(int n)
{
	int	i;

	i = (n == 0);
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	work(long n, char *res, int *pos)
{
	if (n < 0)
	{
		res[*pos] = '-';
		(*pos)++;
		n *= -1;
	}
	if (n < 10)
		res[(*pos)++] = n + '0';
	else
	{
		work(n / 10, res, pos);
		work(n % 10, res, pos);
	}
}

char	*ft_itoa(int n)
{
	int		mc_size;
	long		long_n;
	int		*pos;
	char	*res;

	pos = NULL;
	pos = malloc(sizeof(int));
	if (!pos)
		return (NULL);
	*pos = 0;
	long_n = n;
	mc_size = get_nb_digits(n) + (n < 0);
	res = malloc(sizeof(char) * (mc_size + 1));
	if (!res)
		return (NULL);
	work(long_n, res, pos);
	res[*pos] = 0;
	free(pos);
	return (res);
}
