/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaydamo <dhaydamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:05:25 by dhaydamo          #+#    #+#             */
/*   Updated: 2022/11/07 19:05:13 by dhaydamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (size * nmemb > INT_MAX)
		return (NULL);
	res = malloc(size * nmemb);
	if (!res)
		return (NULL);
	ft_bzero(res, nmemb * size);
	return (res);
}
