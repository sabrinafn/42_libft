/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:08:17 by sabrifer          #+#    #+#             */
/*   Updated: 2024/11/26 09:08:26 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		num;
	long int	ln;

	ln = n;
	if (ln < 0)
	{
		ln = -ln;
		write(fd, "-", 1);
	}
	if (ln > 9)
	{
		ft_putnbr_fd(ln / 10, fd);
		ft_putnbr_fd(ln % 10, fd);
	}
	if (ln < 10)
	{
		num = ln + '0';
		write(fd, &num, 1);
	}
}
