/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaydamo <dhaydamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:14:16 by dhaydamo          #+#    #+#             */
/*   Updated: 2022/11/07 15:41:06 by dhaydamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*new;

	begin = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			while (begin)
			{
				new = begin->next;
				del(begin->content);
				free(begin);
				begin = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&begin, new);
		lst = lst->next;
	}
	return (begin);
}
