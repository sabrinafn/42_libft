/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:04:20 by sabrifer          #+#    #+#             */
/*   Updated: 2024/11/26 09:22:24 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *node)
{
	t_list	*ptr;

	if (lst == NULL || node == NULL)
		return ;
	if (*lst == NULL)
		*lst = node;
	else
	{
		ptr = *lst;
		while (ptr -> next != NULL)
			ptr = ptr -> next;
		ptr -> next = node;
	}
}
