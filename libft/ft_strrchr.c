/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:32:01 by jkubecka          #+#    #+#             */
/*   Updated: 2024/04/22 16:23:25 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	cc;
	int				i;

	cc = c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == cc)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if (s[i] == cc)
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char *s = "pncuentrp";

	printf("%s", ft_strrchr(s, '\0'));
	printf("\n%s", strrchr(s, '\0'));
	return (0);
}
*/
