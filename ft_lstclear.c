/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:05:06 by sabrifer          #+#    #+#             */
/*   Updated: 2024/11/26 09:05:13 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*lista;

	if (lst == NULL || *lst == NULL)
		return ;
	ptr = *lst;
	lista = *lst;
	while (lista != NULL)
	{
		ptr = lista -> next;
		ft_lstdelone(lista, del);
		lista = ptr;
	}
	*lst = NULL;
}
