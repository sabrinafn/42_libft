/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:00:33 by sabrifer          #+#    #+#             */
/*   Updated: 2024/11/26 09:00:53 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*new;
	size_t	total;

	if (nitems >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	if (nitems == 0 || size == 0)
	{
		nitems = 0;
		size = 0;
	}
	if ((int)nitems < 0 || (int)size < 0)
		return (NULL);
	total = nitems * size;
	new = malloc(total);
	if (new == NULL)
		return (NULL);
	ft_memset(new, 0, total);
	return (new);
}
