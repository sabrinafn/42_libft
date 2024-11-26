/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:07:45 by sabrifer          #+#    #+#             */
/*   Updated: 2024/11/26 09:07:50 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*new;
	size_t		i;

	new = str;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)new[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
