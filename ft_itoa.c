/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:02:58 by sabrifer          #+#    #+#             */
/*   Updated: 2024/11/26 09:04:12 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			length;
	long int	ln;

	ln = n;
	length = count_digits(ln);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	if (ln == 0)
		str[0] = '0';
	str[length] = '\0';
	length--;
	if (ln < 0)
	{
		str[0] = '-';
		ln = -ln;
	}
	while (ln != 0)
	{
		str[length] = (ln % 10) + '0';
		ln = ln / 10;
		length--;
	}
	return (str);
}
