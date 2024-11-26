/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:06:39 by sabrifer          #+#    #+#             */
/*   Updated: 2024/11/26 09:06:45 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_ls;
	t_list	*new_data;

	if (!lst || !f || !del)
		return (NULL);
	new_ls = NULL;
	while (lst != NULL)
	{
		new_data = ft_lstnew(f(lst -> content));
		if (new_data == NULL)
		{
			ft_lstclear(&new_ls, del);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&new_ls, new_data);
		lst = lst -> next;
	}
	return (new_ls);
}
