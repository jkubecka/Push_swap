/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:04:33 by jkubecka          #+#    #+#             */
/*   Updated: 2024/05/05 18:10:24 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*substr;

	i = 0;
	substr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!substr)
	{
		return (NULL);
	}
	while (i < ft_strlen(s))
	{
		substr[i] = (*f)(i, s[i]);
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
