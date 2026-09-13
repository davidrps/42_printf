/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 05:52:26 by dparra-s          #+#    #+#             */
/*   Updated: 2026/08/23 06:27:31 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_strtohexa(char *ptr);

int	ft_printps(char c, char *str)
{
	char	*dirhexa;

	if (c == 'p')
	{
		dirhexa = ft_strtohexa(str);
		ft_putstr_fd(dirhexa, 1);
		return (ft_strlen(dirhexa));
	}
	else
	{
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}
}

static char	*ft_strtohexa(char *ptr)
{
	unsigned long long	dir;
	char				str[19];
	char				hex_digits[16];
	int					i;

	dir = (unsigned long long)ptr;
	ft_strlcpy(hex_digits, "0123456789abcdef", 16);
	i = 18;
	str[i] = '\0';
	i--;
	while (dir > 0)
	{
		str[i] = hex_digits[dir & 0xF];
		dir = dir >> 4;
		i--;
	}
	str[i] = 'x';
	i--;
	str[i] = '0';
	return (str);
}
