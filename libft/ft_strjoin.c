/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 12:36:15 by dparra-s          #+#    #+#             */
/*   Updated: 2026/06/04 07:40:03 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen((char *)s1);
	j = ft_strlen((char *)s2);
	join = (char *)ft_calloc(i + j + 1, sizeof(char));
	if (join == (void *)0)
		return ((void *)0);
	ft_memcpy(join, (char *)s1, i);
	ft_memcpy(join + i, (char *)s2, j);
	join[i + j + 1] = '\0';
	return (join);
}
