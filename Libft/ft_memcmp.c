/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:50:14 by tiago             #+#    #+#             */
/*   Updated: 2025/10/23 15:29:10 by tsimao-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *str1;
    const unsigned char *str2;
    
    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
    
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
// int main()
// {
// 	int dor = ft_memcmp("teste2", "teste3", 6);
// 	if(dor < 0)
// 		printf("s2 é maior");
// 	else if(dor > 0)
// 		printf("s1 é maior");
// 	else
// 		printf("são iguais");
// }