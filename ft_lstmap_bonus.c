/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:32:48 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/20 16:39:50 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

//Allouer un noeud
//Appliquer une fonction sur le nouveau noeud cree qui contient og lst
//Reccursivement permet d'automatiser le process

void	set_null(t_list *head, t_list *node, t_list *last)
{
	head = NULL;
	node = NULL;
	last = NULL;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;
	t_list	*last;

	set_null(head, node, last);
	while (lst)
	{
		node = ft_calloc(1, sizeof(t_list));
		if (!node)
			ft_lstclear(&node, del);
		node->content = f(lst->content);
		if (head == NULL)
		{
			head = node;
			last = node;
		}
		else
		{
			last->next = node;
			last = node;
		}
		lst = lst->next;
	}
	return (head);
}
