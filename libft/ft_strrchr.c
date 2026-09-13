/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:29:15 by dparra-s          #+#    #+#             */
/*   Updated: 2026/06/11 13:50:34 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ret;

	ret = (void *)0;
	if (c > 256)
		c = c % 256;
	while (*str != '\0')
	{
		if (*str == c)
			ret = (char *)str;
		str++;
	}
	if (*str == c)
		return ((char *)str);
	return (ret);
}
