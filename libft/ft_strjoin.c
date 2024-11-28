/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:41:36 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/06 16:51:06 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*join;
	size_t		i;
	size_t		n;

	n = -1;
	i = -1;
	join = malloc((ft_strlen(s1) + ft_strlen(s2) + 2) * sizeof(char));
	if (!join)
		return (NULL);
	if (!s1 && !s2)
	{
		free(join);
		return (NULL);
	}
	while (++i < ft_strlen(s1))
		join[i] = s1[i];
	join[i++] = ' ';
	while (++n < ft_strlen(s2))
		join[i++] = s2[n];
	join[i] = '\0';
	return (join);
}
