/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago <tiago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:39:32 by tiago             #+#    #+#             */
/*   Updated: 2025/11/08 23:46:44 by tiago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list	*node; //cria uma lista nova igual à do header

	node = (t_list *)malloc(sizeof(t_list)); //aloca memória com o tamanho de uma t_list (16 bytes [8+8] em sistemas x64 e 8 bytes [4+4] em sistemas 32x)
	if (!node)
		return (NULL);
	node->content = content; //adiciona o conteúdo na variável da nova lista
	node->next = NULL; //inicializa o próximo pointer, colocando NULL para mencionar que ainda não está a apontar para nada
	return (node); //retorna o pointer do novo node acabado de inicializar
}
