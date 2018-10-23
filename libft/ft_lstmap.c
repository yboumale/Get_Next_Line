/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 11:09:54 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/08 14:49:21 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *temp;
	t_list *new;
	t_list *start;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	new = ft_lstnew(temp->content, temp->content_size);
	if (!new)
		return (NULL);
	lst = lst->next;
	start = new;
	while (lst)
	{
		temp = f(lst);
		new->next = ft_lstnew(temp->content, temp->content_size);
		if (!new->next)
			return (NULL);
		lst = lst->next;
		new = new->next;
	}
	return (start);
}
