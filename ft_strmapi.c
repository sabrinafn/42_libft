/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:20:47 by sabrifer          #+#    #+#             */
/*   Updated: 2024/11/26 09:20:53 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	change_char(unsigned int i, char c)
{
		c = c + i;
	return (c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*buffer;
	int				length;
	unsigned int	i;

	i = 0;
	length = ft_strlen((char *)s);
	buffer = (char *)malloc(sizeof(char) * (length + 1));
	if (buffer == NULL)
		return (NULL);
	while (s[i])
	{
		buffer[i] = f(i, s[i]);
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
