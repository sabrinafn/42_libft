/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:11:30 by sabrifer          #+#    #+#             */
/*   Updated: 2024/11/26 09:11:35 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	uc;
	int				i;

	i = 0;
	uc = (unsigned char)c;
	if (uc == 0)
		return ((char *)str + ft_strlen(str));
	while (str[i])
	{
		if (str[i] == uc)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
