/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaydamo <dhaydamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:14:59 by dhaydamo          #+#    #+#             */
/*   Updated: 2022/11/11 15:58:45 by dhaydamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_src = ft_strlen(src);
	j = 0;
	if (size == 0)
		return (size + len_src);
	len_dest = ft_strlen(dest);
	if (size <= len_dest)
		return (size + len_src);
	i = len_dest;
	while (src[j] && j + 1 + len_dest < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (len_dest + len_src);
}
