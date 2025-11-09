/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago <tiago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:30:22 by tsimao-g          #+#    #+#             */
/*   Updated: 2025/11/07 12:56:33 by tiago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptdst;
	unsigned char	*ptsrc;
	
	ptdst = (unsigned char *)dst;
	ptsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptdst[i] = ptsrc[i];
		i++;
	}
	return (dst);
}
