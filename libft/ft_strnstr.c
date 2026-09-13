/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 12:59:15 by dparra-s          #+#    #+#             */
/*   Updated: 2026/06/11 13:55:51 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *litlle, size_t len)
{
	size_t	i;
	size_t	j;

	if (litlle[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == litlle[j] && (i + j) < len)
		{
			if (litlle[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return ((void *)0);
}
