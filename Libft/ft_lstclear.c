/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:47:35 by tsimao-g          #+#    #+#             */
/*   Updated: 2025/11/10 14:59:18 by tsimao-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next; //diz o próximo node
	t_list	*current; //diz o node atual

	if (lst && del) //se o pointer e o delete estiverem corretos
	{
		current = *lst; //a current list é equivalente ao node que o pointer lst está a apontar
		while (current) //até current ser NULL
		{
			next = current->next; //o next node é o "next" no "current" node
			del(current->content); //limpa o conteudo
			free(current); //memória
			current = next; //passa para o próximo para repetir o loop
		}
		*lst = NULL; //mete o pointer para a lista como NULL
	}	
}
