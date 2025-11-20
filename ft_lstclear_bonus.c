/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 17:30:18 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/20 16:35:57 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Effacer la liste a l'envers
//noeud par noeud
//ne pas oublier l'adresse du noeud precedent (recursive)
#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || *lst == NULL || !del)
		return ;
	if ((*lst)->next != NULL)
		ft_lstclear(&(*lst)->next, del);
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
}
