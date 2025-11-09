/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago <tiago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 00:43:26 by tiago             #+#    #+#             */
/*   Updated: 2025/11/09 00:55:11 by tiago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// this is just t_list *, not t_list **, because we only need to read the list, not modify the head pointer

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next; //aponta para o próximo node, quando for ao ultimo, recebe NULL e para o loop
	}
	return (count);
}
