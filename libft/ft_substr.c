/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 12:36:15 by dparra-s          #+#    #+#             */
/*   Updated: 2026/06/20 14:17:06 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (start < (unsigned int)ft_strlen((char *)s))
	{
		if (len >= (unsigned int)ft_strlen((char *)s)
			|| (start + len) > (unsigned int)ft_strlen((char *)s))
			substr = (char *)malloc((ft_strlen((char *)s) - start) + 1);
		else
			substr = (char *)malloc(len + 1);
		if (!substr)
			return (NULL);
		while (i < len && i < ((unsigned int)ft_strlen((char *)s) - start))
		{
			substr[i] = s[i + start];
			i++;
		}
	}
	else
		substr = (char *)malloc(1);
	if (!substr)
		return (NULL);
	substr[i] = '\0';
	return (substr);
}
