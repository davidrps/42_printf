/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 16:29:15 by dparra-s          #+#    #+#             */
/*   Updated: 2026/06/20 11:45:58 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*last;
	char	chr;

	last = NULL;
	chr = c;
	while (*str != '\0')
	{
		if (*str == chr)
		{
			last = ((char *)str);
			return (last);
		}
		str++;
	}
	if (*str == chr)
		return ((char *)str);
	return (last);
}
