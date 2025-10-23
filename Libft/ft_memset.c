/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:33:44 by tiago             #+#    #+#             */
/*   Updated: 2025/10/23 15:29:06 by tsimao-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
    unsigned char    *temp;
    int i;
    
    i = 0;
    temp = (unsigned char *) str;
    while (n > 0)
    {
        temp[i] = (unsigned char) c;
        n--;
        i++;
    }
    return (str);
}
// int main() {
//    char str[] = "dordordor";
//    ft_memset(str, '#', 6);
//    printf("%s\n", str);
//    return 0;
// }