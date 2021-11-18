/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:00:27 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/13 17:52:58 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*temp;

	if (!lst)
		return (NULL);
	else
	{
		temp = f(lst);
		new = ft_lstnew(temp->content, temp->content_size);
		if (!new)
			return (NULL);
		new->next = ft_lstmap(lst->next, f);
	}
	return (new);
}
