/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:15:15 by jkubecka          #+#    #+#             */
/*   Updated: 2024/04/23 13:16:51 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	count;
	char	*s2;
	size_t	i;

	count = ft_strlen(s1) + 1;
	s2 = (char *)malloc(count);
	i = 0;
	if (s2 == NULL)
	{
		return (NULL);
	}
	while (i < (count - 1))
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main(void)
{
	char	s1[] = "";

	printf("%s", ft_strdup(s1));
	printf("\n%s", strdup(s1));
	return (0);
}
*/
