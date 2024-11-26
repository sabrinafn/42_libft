/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:11:40 by sabrifer          #+#    #+#             */
/*   Updated: 2024/11/26 09:11:52 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	in_word;
	int	count_words;

	i = 0;
	in_word = 0;
	count_words = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (in_word == 0)
			{
				in_word = 1;
				count_words++;
			}
		}
		else
			in_word = 0;
		i++;
	}
	return (count_words);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		x;

	split = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	i = 0;
	j = 0;
	x = 0;
	if (split == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] != '\0' && s[i + j] != c)
			j++;
		if (s[i] != '\0')
			split[x++] = ft_substr(s, i, j);
		i = i + j;
	}
	split[x] = NULL;
	return (split);
}
