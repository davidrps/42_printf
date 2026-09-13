/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:00:35 by dparra-s          #+#    #+#             */
/*   Updated: 2026/06/04 00:24:20 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(const void *s, size_t n)
{
	unsigned char	*pos;

	pos = (unsigned char *)s;
	if (n)
	{
		while (n--)
			*pos++ = 0;
	}
}
