/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:36:11 by dparra-s          #+#    #+#             */
/*   Updated: 2026/06/21 00:56:21 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_to_delete(char c, char const *to_delete);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen((char *)s1) - 1;
	while (ft_to_delete(s1[start], set) && s1[start])
		start++;
	while (ft_to_delete(s1[end], set) && end > 0)
		end--;
	if (end >= start)
	{
		s2 = ft_calloc((end - start) + 2, sizeof(char));
		if (!s2)
			return (NULL);
		ft_memcpy(s2, s1 + start, (end - start) + 1);
	}
	else
		s2 = ft_calloc(1, sizeof(char));
	if (!s2)
		return (NULL);
	s2[ft_strlen((char *)s2)] = '\0';
	return (s2);
}

static int	ft_to_delete(char c, char const *to_delete)
{
	size_t	i;

	i = 0;
	while (to_delete[i] != '\0')
	{
		if (to_delete[i] == c)
			return (1);
		i++;
	}
	return (0);
}
