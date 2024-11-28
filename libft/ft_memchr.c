/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:18:55 by jkubecka          #+#    #+#             */
/*   Updated: 2024/04/23 11:21:28 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*str;
	unsigned char		cc;
	size_t				i;

	str = (unsigned const char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cc)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	if (cc == '\0' && (i < n))
	{
		return ((void *)&str[i]);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char str[] = "bonjourno";

	printf("%s", ft_memchr(str, 'n', 2));
	printf("\n%s", memchr(str, 'n', 2));
	return (0);
}
*/
