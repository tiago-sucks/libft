/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago <tiago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:17:25 by tiago             #+#    #+#             */
/*   Updated: 2025/11/04 16:55:09 by tiago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*sub;
	size_t			s_len;
	
	i = 0;
	s_len = ft_strlen(s); //calcula a length da string
	if (start >= s_len)
		len = 0; //se start for 10, mas a string só tiver 4 caracteres, retorna um byte no malloc para '\0'
	else if (len > s_len - start)
		len = s_len - start; //converte a len para a s_len (len da string) - start (quando se quer que a string comece)
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (i != start && s[i])
		i++;
	j = 0;
	while (j < len && s[i + j])
	{
		sub[j] = s[i + j];
		j++;
	}
	sub[j] = 0;
	return (sub);
}
