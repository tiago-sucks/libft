/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:58:52 by tiago             #+#    #+#             */
/*   Updated: 2025/11/05 17:27:51 by tsimao-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i]) //enquanto a string for uma string
	{
		if (s[i] != c) //SE a string for diferente do separador
		{
			words++;  //conta uma palavra
			while (s[i] && s[i] != c) //ignora o resto das letras da letras até sair do loop e entrar novamente na condição
				i++;
		}	
		else
			i++;
	}
	return (words);
}

static char	*ft_get_words(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c) //faz o strlen enquanto o s[i] não for a letra do separador
		i++;
	word = (char *) malloc(sizeof(char) * (i + 1)); //cria a string com o i + 1 para o NULL
	if (!word) //verifica o malloc
		return (NULL);
	i = 0; //reinicia o "i" para usar como index
	while (s[i] && s[i] != c) //enquanto o s[i] não for o separador...
	{
		word[i] = s[i]; //...passa o s[i] para o word[i]
		i++;
	}
	word[i] = '\0'; //acaba a string
	return (word);
}

static void	ft_free_words(char **words, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**words;

	if (!s)
		return (NULL);
	words = (char **) malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!words)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words[j++] = ft_get_words(&s[i], c);
			if (!words[j - 1])
				return (ft_free_words(words, j - 1), NULL);
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (words[j] = 0, words);
}
