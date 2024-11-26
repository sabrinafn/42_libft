/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:20:06 by sabrifer          #+#    #+#             */
/*   Updated: 2024/11/26 09:20:14 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		end;
	int		counter;

	i = 0;
	counter = 0;
	end = ft_strlen((char *)s1) - 1;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
	{
		++counter;
		i++;
	}
	while (end >= i && ft_strchr(set, s1[end]) != NULL)
	{
		++counter;
		end--;
	}
	new = ft_substr(s1, i, (ft_strlen((char *)s1)) - counter);
	return (new);
}
