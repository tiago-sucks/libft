/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:37:24 by tsimao-g          #+#    #+#             */
/*   Updated: 2025/11/10 14:41:56 by tsimao-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr; //cria um pointer para uma lista existente

	if (!lst || !new) //verifica se ambas existem e dá handle a seg fault
		return ;
	if (!*lst) //se a lista existir porém não tiver nenhum node, torna o new primeiro e ultimo node
		*lst = new;
	else
	{
		curr = *lst; //aponta para a array de nodes
		while (curr->next) //enquanto o next de curr não for NULL...
			curr = curr->next; //...incrementa
		curr->next = new; //após o loop acabar, passa o new para o ultimo next
	}
}
