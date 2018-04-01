/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:24:03 by rhrab             #+#    #+#             */
/*   Updated: 2017/12/13 20:01:44 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlist;
	t_list *first;

	first = NULL;
	if (lst && f)
	{
		first = f(lst);
		newlist = first;
		while (lst)
		{
			if ((newlist->next = f(lst)))
				newlist = newlist->next;
			else
				return (NULL);
			lst = lst->next;
		}
		return (first);
	}
	return (NULL);
}
