/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago <tiago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:33:44 by tiago             #+#    #+#             */
/*   Updated: 2025/10/23 00:44:34 by tiago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void *ft_memset(void *str, int c, size_t n)
{
    unsigned char    *temp;
    
    temp = (unsigned char *) str;
    while (n > 0)
    {
        *(temp++) = (unsigned char) c;
        n--;
    }
    return (str);
}
// int main() {
//    char str[] = "dordordor";
//    ft_memset(str, '#', 6);
//    printf("%s\n", str);
//    return 0;
// }