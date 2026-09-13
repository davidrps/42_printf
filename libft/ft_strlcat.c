/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:15:16 by dparra-s          #+#    #+#             */
/*   Updated: 2026/06/11 15:00:26 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_size;
	size_t	src_size;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	i = dest_size;
	j = 0;
	if (size <= dest_size)
		return (src_size + size);
	while ((i + j) < size - 1 && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest_size + src_size);
}
