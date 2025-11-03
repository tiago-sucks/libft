/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:48:43 by tsimao-g          #+#    #+#             */
/*   Updated: 2025/11/03 16:47:16 by tsimao-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start])) ///vê quando é que a string "s1" começa verificando se há caracteres de "set" com a função ft_strchr
		start++;
	while (end > start && ft_strchr(set, s1[end - 1])) //vê quando é que a string "s1" acaba verificando se há caracteres de "set" com a função ft_strchr
		end--;
	result = (char *)malloc(sizeof(char) * ((end - start) + 1)); //faz malloc com end - start e + 1 para o NULL
	if (!result)
		return (NULL);
	i = 0;
	while (i < (end - start))
	{
		result[i] = s1[start + i]; //enquanto o i for menor que len faz a copia do s1[start(quando começa) + i] para result
		i++;
	}
	result[i] = '\0';
	return (result);
}
