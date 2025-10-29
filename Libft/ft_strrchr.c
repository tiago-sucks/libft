/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:05:00 by tsimao-g          #+#    #+#             */
/*   Updated: 2025/10/29 16:37:24 by tsimao-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t len;

	len = ft_strlen(s);
	if (len > 0)
	{
		while (len - 1 >= 0)
		{
			if (s[len] == (char)c)
				return ((char *)&s[len]);
			len--;
		}
	}
	if ((char)c == '\0')
		return ((char *)&s[len]);
	return (NULL);
}
