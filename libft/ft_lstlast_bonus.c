/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 21:09:42 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/02 17:54:09 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_liblist	*ft_lstlast(t_liblist *lst)
{
	if (!lst)
		return (NULL);
	else
	{
		while (lst->next != NULL )
			lst = lst->next;
		return (lst);
	}
}
