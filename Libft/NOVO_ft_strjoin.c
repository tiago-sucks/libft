/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NOVO ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago <tiago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:16:13 by tiago             #+#    #+#             */
/*   Updated: 2025/10/30 01:19:49 by tiago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int len;
    char *tab;

    i = 0;
    j = 0;
    if (!s1 || !s2)
        return (NULL);
    len = ft_strlen(s1) + ft_strlen(s2);
    tab = malloc(sizeof(char) * len + 1);
    if (!tab)
        return(NULL);
    while (s1[i])
    {
        tab[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        tab[i + j] = s2[j];
        j++;
    }
    tab[i + j] = 0;
    return (tab);
}

// int main(void)
// {
// 	char *result;

// 	printf("=== Test 1: Normal strings ===\n");
// 	result = ft_strjoin("Hello", "World");
// 	printf("Result: '%s'\n", result);
// 	printf("Expected: 'HelloWorld'\n\n");
// 	free(result);

// 	printf("=== Test 2: Empty first string ===\n");
// 	result = ft_strjoin("", "World");
// 	printf("Result: '%s'\n", result);
// 	printf("Expected: 'World'\n\n");
// 	free(result);

// 	printf("=== Test 3: Empty second string ===\n");
// 	result = ft_strjoin("Hello", "");
// 	printf("Result: '%s'\n", result);
// 	printf("Expected: 'Hello'\n\n");
// 	free(result);

// 	printf("=== Test 4: Both empty ===\n");
// 	result = ft_strjoin("", "");
// 	printf("Result: '%s'\n", result);
// 	printf("Expected: ''\n\n");
// 	free(result);

// 	printf("=== Test 5: NULL pointer (first) ===\n");
// 	result = ft_strjoin(NULL, "World");
// 	printf("Result: %s\n", result ? result : "NULL");
// 	printf("Expected: NULL\n\n");

// 	printf("=== Test 6: NULL pointer (second) ===\n");
// 	result = ft_strjoin("Hello", NULL);
// 	printf("Result: %s\n", result ? result : "NULL");
// 	printf("Expected: NULL\n\n");

// 	printf("=== Test 7: With spaces ===\n");
// 	result = ft_strjoin("Hello ", "World!");
// 	printf("Result: '%s'\n", result);
// 	printf("Expected: 'Hello World!'\n\n");
// 	free(result);

// 	return (0);
// }