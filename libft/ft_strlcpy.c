/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:39:09 by jkubecka          #+#    #+#             */
/*   Updated: 2024/05/15 18:28:39 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (i < (dstsize - 1) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dst[] = "";
	char src[] = "copy";
	ft_strlcpy(dst, src, 0);
	printf("%zu", ft_strlcpy(dst, src, 0));
	printf("\n%s", dst);
	return(0);
}
*/
