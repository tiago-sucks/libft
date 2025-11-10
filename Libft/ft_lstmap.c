/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:01:24 by tsimao-g          #+#    #+#             */
/*   Updated: 2025/11/10 15:07:21 by tsimao-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nnode;

	if (!lst || !f) //handle a seg fault
		return (NULL);
	nlst = NULL; //a nlst vai ser a nova lista que vai ser retornada
	nnode = NULL; //o nnode é o novo node que vai ser feito para aplicar a nlist
	while (lst) //enquanto a lst não for NULL
	{
		nnode = ft_lstnew(f(lst->content)); //vai ser criado um novo node nnode com o conteúdo sendo a aplicação da função f no content do node da lista original
		if (!nnode) //se falhar
		{
			ft_lstclear(&nlst, del); //limpa-se a nlist toda
			return (NULL);//e retorna NULL
		}
		ft_lstadd_back(&nlst, nnode); //se tudo correr bem, esse node é colocado no final, porque a stack coloca sempre o node mais recente no inicio da lista nova
		lst = lst->next; //incrementa
	}
	return (nlst); //retorna a nova lista
}