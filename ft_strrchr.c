/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:20:17 by sabrifer          #+#    #+#             */
/*   Updated: 2024/11/26 09:20:23 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	uc;
	int				len;

	len = ft_strlen((char *)str);
	uc = (unsigned char)c;
	while (len >= 0)
	{
		if (str[len] == uc)
			return ((char *)str + len);
		len--;
	}
	return (NULL);
}
