/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:50:08 by jkubecka          #+#    #+#             */
/*   Updated: 2024/05/05 20:32:49 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;	

	start = 0;
	if (!s1)
	{
		return (NULL);
	}
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && ft_strrchr(set, s1[end - 1]))
	{
		end--;
	}
	return (ft_substr(s1, start, (end - start)));
}
/*
int	main(void)
{
	printf("%s", ft_strtrim("pppphola que pasapppp", "p"));
	//printf("\n%s", strtrim("ababababhola que pasabababa", "a, b"));
	return (0);
}
*/
