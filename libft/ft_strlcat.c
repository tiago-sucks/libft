/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago <tiago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 01:15:24 by tiago             #+#    #+#             */
/*   Updated: 2025/10/23 01:17:47 by tiago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destl;
	size_t	srcl;

	srcl = ft_strlen(src);
	destl = ft_strlen(dst);
	j = destl;
	i = 0;
	if (destl < size - 1 && size > 0)
	{
		while (src[i] && destl + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (destl >= size)
		destl = size;
	return (destl + srcl);
}
