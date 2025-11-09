/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago <tiago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 00:56:08 by tiago             #+#    #+#             */
/*   Updated: 2025/11/09 01:00:37 by tiago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst) //retorna NULL se não houver nodes
		return (NULL);
	while (lst->next) //enquanto o lst->next =! NULL, ele vai incrementar
		lst = lst->next;
	return (lst); //quando incrementar até lst->next = NULL, retorna essa, pois é o ultimo node da lista
}
