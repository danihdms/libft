/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaydamo <dhaydamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:15:12 by dhaydamo          #+#    #+#             */
/*   Updated: 2022/11/07 19:47:39 by dhaydamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strrchr(const char *s, int c)
// {
// 	int	i;

// 	i = ft_strlen(s);
// 	while (--i >= 0)
// 		if (s[i] == c)
// 			return ((char *) &s[i]);
// 	return (NULL);
// }

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) + 1;
	while (--i != -1)
		if (s[i] == (c % 256))
			return ((char *) &(s[i]));
	
	return (NULL);
}