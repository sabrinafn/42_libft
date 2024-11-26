/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:09:10 by sabrifer          #+#    #+#             */
/*   Updated: 2024/11/26 09:09:17 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*new;
	unsigned char	j;
	size_t			i;

	new = dest;
	j = c;
	i = 0;
	while (i < count)
	{
		new[i] = j;
		i++;
	}
	return (dest);
}
