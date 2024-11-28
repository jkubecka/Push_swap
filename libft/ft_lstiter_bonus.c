/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:25:37 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/02 17:52:25 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_liblist *lst, void (*f)(void *))
{
	t_liblist	*aux;

	aux = lst;
	if (lst && f)
	{
		while (lst != NULL)
		{
			aux = lst->next;
			f(lst->content);
			lst = aux;
		}
	}
}
