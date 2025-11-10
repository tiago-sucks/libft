/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:43:10 by tsimao-g          #+#    #+#             */
/*   Updated: 2025/11/10 14:45:36 by tsimao-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del) //se houverem lst e del
	{
		del(lst->content); //dá delete ao conteúdo da lista
		free(lst); //dá free à memória da lista
		lst = NULL; //apaga a lista
	}
}
