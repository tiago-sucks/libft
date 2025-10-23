/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago <tiago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:10:28 by tiago             #+#    #+#             */
/*   Updated: 2025/10/23 00:36:15 by tiago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>


char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	
	if (!s1 || !s2)
		return (NULL);
	if (s2[0] == '\0')
		return ((char*)s1);
	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] && s1[i + j] == s2[j] && s2[j] && i + j < n)
		{
			j++;
		}
		if (!s2[j])
			return ((char*)(s1 + i));
		++i;
	}
	return (NULL);
}

// int main()
// {
// 	char *result;
    
//     result = ft_strnstr("0123456789", "4", 10);
//     printf("%s\n", result ? result : "(null)");
    
//     result = ft_strnstr("0123456789", "4", 2);
//     printf("%s\n", result ? result : "(null)");
    
//     result = ft_strnstr("0123456789", "a", 10);
//     printf("%s\n", result ? result : "(null)");
    
//     result = ft_strnstr("0123456789", "9", 10);
//     printf("%s\n", result ? result : "(null)");
    
//     return 0;
// }
