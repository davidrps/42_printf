/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 13:12:37 by dparra-s          #+#    #+#             */
/*   Updated: 2026/06/20 11:30:09 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_del_spaces(const char *str);
static int			ft_get_num(const char *str);

int	ft_atoi(const char *str)
{
	int	out;
	int	neg;

	out = 0;
	neg = 1;
	str = ft_del_spaces(str);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	out = ft_get_num(str) * neg;
	return (out);
}

static const char	*ft_del_spaces(const char *str)
{
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r')
			str++;
		else
			return (str);
	}
	return (str);
}

static int	ft_get_num(const char *str)
{
	int	num;

	num = 0;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			if (num == 0)
				num = *str - '0';
			else
				num = (num * 10) + (*str - '0');
			str++;
		}
		else
			return (num);
	}
	return (num);
}
