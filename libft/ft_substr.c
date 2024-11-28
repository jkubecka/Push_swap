/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:13:24 by jkubecka          #+#    #+#             */
/*   Updated: 2024/04/24 21:12:09 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (ft_strlen(s) < start)
	{
		return (ft_strdup(""));
	}
	if (ft_strlen(s) > len + start)
	{
		str = (char *)malloc(len + 1);
	}
	else
	{
		len = ft_strlen(s) - start;
		str = (char *)malloc(len + 1);
	}
	if (!str)
	{
		return (NULL);
	}
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
/*
#include <string.h>

int	main(void)
{
	char const s[] = "buenas";

	//printf("%s", s);
	printf("\n%s", ft_substr(s, 4, 6));
	//printf("\n%d", subtsr(s, 2, 5));
	return (0);
}
*/
