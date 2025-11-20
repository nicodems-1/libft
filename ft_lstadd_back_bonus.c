/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:43:49 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/20 13:23:31 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//go to the end of the lst
//create a new lst
//link the new to the end
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_old;

	if (!new)
		return ;
	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	last_old = ft_lstlast(*lst);
	last_old->next = new;
}
