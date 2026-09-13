/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:00:35 by dparra-s          #+#    #+#             */
/*   Updated: 2026/05/22 19:45:13 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*ret;
	unsigned char	*data;

	if (!dest && !src)
		return (NULL);
	ret = (unsigned char *)dest;
	data = (unsigned char *)src;
	while (count--)
		*ret++ = *data++;
	return (dest);
}
