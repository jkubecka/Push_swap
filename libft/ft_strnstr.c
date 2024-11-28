/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:35:53 by jkubecka          #+#    #+#             */
/*   Updated: 2024/05/05 20:49:15 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0' && (i < len))
	{
		j = 0;
		while ((needle[j] != '\0') && (haystack[i + j] == needle[j])
			&& ((i + j) < len))
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	//const char haystack[40] = "lorem ipsum dolor sit amet";
	//const char needle[40] = "dol";

	printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("\n%s", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	return (0);
}
*/
