/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:55:54 by tsimao-g          #+#    #+#             */
/*   Updated: 2025/11/10 15:01:05 by tsimao-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f) //se existirem
	{
		while (lst) //enquanto lst não for NULL
		{
			f(lst->content); //aplica a função no conteúdo
			lst = lst->next; //itera o node
		}
	}
}
