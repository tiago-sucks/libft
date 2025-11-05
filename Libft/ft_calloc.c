/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:55:18 by tsimao-g          #+#    #+#             */
/*   Updated: 2025/11/05 17:11:12 by tsimao-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The  calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
// The memory is set to zero.  If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().
// If the multiplication of nmemb and size would result in integer overflow, then calloc() returns an error.
// By contrast, an integer overflow would not be detected in the following call to malloc(), with the result that an incorrectly sized block of memory would be allocated

//nmemb - numero de elementos numa array // size - tamanho dos elementos do array

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(1)); //retorna o pointer se forem 0
	if (size > SIZE_MAX / nmemb)
		return (NULL); //dá erro se a multiplicação der overflow
	temp = malloc(nmemb * size);
	if (!temp)
		return (NULL); //fazemos na mesma para verificar caso falhe por problemas de hardware
	while (i < nmemb * size)
		temp[i++] = 0;
	return (temp);
}

//usar NULL num calloc sucedido, tipo calloc(0,5) dá a parecer que falhou
//usar malloc(0) em glibc retorna um pointer válido, mas para outros pode passar como NULL, mas pronto podia ser malloc(1)