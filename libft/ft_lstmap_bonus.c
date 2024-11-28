/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:50:57 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/03 15:27:35 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_liblist	*ft_lstmap(t_liblist *lst, void *(*f)(void *), void (*del)(void *))
{
	if (!lst || !f || !del)
		return (NULL);
	return (NULL);
}

	/*t_liblist	*new;
	t_liblist	*sublst;

	sublst = NULL;
	if (!lst || !del || !f)
		return (NULL);
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&sublst, del);
			return (NULL);
		}
		//ft_lstadd_back(&sublst, new);
		lst = lst->next;
	}
	return (sublst);*/