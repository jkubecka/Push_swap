/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:16:29 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/02 17:53:03 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_liblist **lst, void (*del)(void *))
{
	t_liblist	*aux;

	aux = *lst;
	if (aux && del)
	{
		while ((*lst) != NULL)
		{
			aux = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			(*lst) = aux;
		}
	}
}
