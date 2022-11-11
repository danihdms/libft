/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaydamo <dhaydamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:15:17 by dhaydamo          #+#    #+#             */
/*   Updated: 2022/11/08 20:05:37 by dhaydamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	new_len;
	char	*res;

	if (!s)
		return (NULL);
	i = 0;
	new_len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		new_len = 0;
	else if (len < new_len)
		new_len = len;
	res = malloc(sizeof(char) * (new_len + 1));
	if (!res)
		return (NULL);
	while (i < new_len && s[start])
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = 0;
	return (res);
}
