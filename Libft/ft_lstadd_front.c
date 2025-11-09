/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago <tiago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 23:28:23 by tiago             #+#    #+#             */
/*   Updated: 2025/11/08 23:47:04 by tiago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//pega num poiner duma linked list, lst, e adiciona o new para o inicio desta
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL) //se o pointer e a lista existirem, respetivamente...
	{
		new->next = *lst; //This makes the new node point to what was previously the first node in the list. If the list was empty, `*lst` would be `NULL`, so `new->next` becomes `NULL`.
		*lst = new; //mete o pointer da array de listas a apontar para o new
	}
}

// ## Visual Example

// Before:
// lst → [head pointer] → [Node A] → [Node B] → NULL
// new → [New Node] → ???

// After new->next = *lst:
// lst → [head pointer] → [Node A] → [Node B] → NULL
// new → [New Node] → [Node A]

// After *lst = new:
// lst → [head pointer] → [New Node] → [Node A] → [Node B] → NULL