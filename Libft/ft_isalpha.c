/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:33:58 by tsimao-g          #+#    #+#             */
/*   Updated: 2025/10/27 18:49:47 by tsimao-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return(1);
	else
		return (0);
}
int main()
{
	printf("%d teste com original\n", isalpha('a'));
	printf("%c teste com o meu\n", ft_isalpha('a'));
}
