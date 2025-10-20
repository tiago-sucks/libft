/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:02:16 by tsimao-g          #+#    #+#             */
/*   Updated: 2025/10/20 19:10:07 by tsimao-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strncmp(const char *s1, const char *s2, size_t c)
{
	unsigned int	i;

	i = 0;
	while (i < c)
	{
		if (s1[i] != s2[i] || s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}