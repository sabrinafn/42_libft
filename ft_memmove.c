/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:09:20 by sabrifer          #+#    #+#             */
/*   Updated: 2024/11/26 09:09:28 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	d = dest;
	s = (char *)src;
	if (dest > src)
	{
		while (count > 0)
		{
			count--;
			d[count] = s[count];
		}
	}
	else
	{
		while (i < count)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
