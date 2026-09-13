/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 18:17:15 by dparra-s          #+#    #+#             */
/*   Updated: 2026/06/02 23:13:37 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t count)
{
	const unsigned char	*data;
	unsigned char		ch;

	data = (const unsigned char *)buf;
	ch = (unsigned char)c;
	while (count--)
	{
		if (*data == ch)
			return ((void *)data);
		data++;
	}
	return ((void *)0);
}
