/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago <tiago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:32:42 by tiago             #+#    #+#             */
/*   Updated: 2025/11/04 16:26:08 by tiago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
		count = 1; //mete o count para 1 ao invés de 0 antes de realmente contar para dar espaço ao '-' no str[0] 
	while (n != 0)
	{
		n /= 10; //divide o n por 10 até n = 0, quebrando assim o loop
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	char	*str;

	num = n;
	len = count_digits(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0'; //terminar antes de preencher o array porque len vai ser decrementada
	if (num < 0)
	{
		str[0] = '-';
		num = -num; // depois de adicionar o '-', retorna o numero para positivo
	}
	while (len > 0 && str[len - 1] != '-') //a ultima condição impede o str[len] dar overwrite ao str[0] (que é -)
	{
		len--; // move primeiro o index
		str[len] = (num % 10) + '0'; // faz o módulo do número em questão e adiciona '0' para tornar em string
		num /= 10;
	}
	return (str);
}
