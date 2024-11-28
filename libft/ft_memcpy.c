/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:29:42 by jkubecka          #+#    #+#             */
/*   Updated: 2024/04/24 21:36:16 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*str_dst;
	const char	*str_src;
	size_t		i;

	str_dst = dst;
	str_src = src;
	i = 0;
	if (!dst && !src)
	{
		return (NULL);
	}
	while (i < n)
	{
		str_dst[i] = str_src[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>

int	main(void)
{
	char str_dst[] = "hello";
	char str_src[] = "funciona";

	ft_memcpy(str_dst, str_src, 3);
	printf("%s", ft_memcpy(str_dst, str_src, 3));
	return (0);
}
*/
