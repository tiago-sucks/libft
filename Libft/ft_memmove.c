/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 19:44:56 by tiago             #+#    #+#             */
/*   Updated: 2025/11/11 17:35:32 by tsimao-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dp;
	const char	*sp;
	size_t		i;

	dp = (char *)dst;
	sp = (const char *)src;
	if (sp < dp && sp + len > dp)
	{
		i = len;
		while (i > 0)
		{
			i--;
			dp[i] = sp[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dp[i] = sp[i];
			i++;
		}
	}
	return (dst);
}
