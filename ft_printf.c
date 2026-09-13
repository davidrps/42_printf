/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 22:52:09 by dparra-s          #+#    #+#             */
/*   Updated: 2026/08/23 05:28:20 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

static int	ft_printall(const char *string, int n[], va_list ap);

int	ft_printf(const char *string, ...)
{
	va_list	ap;
	int		n[5];
	int		ret;

	ret = 0;
	va_start(ap, string);
	n[0] = 0;
	n[1] = -1;
	n[2] = 0;
	n[3] = 0;
	n[4] = 0;
	ret = ft_printall(string, n, ap);
	va_end(ap);
	if (ret == -1)
		return (-1);
	if (n[1] == 0)
		return (-1);
	n[0] = (n[0] + n[2]) - (n[3] * 2) - n[4];
	return (n[0]);
}

static int	ft_printall(const char *string, int n[], va_list ap)
{
	while (string[n[0]] != '\0')
	{
		if (string[n[0]] != '%' && n[1] != 0)
			ft_putchar_fd(string[n[0]], 1);
		else
		{
			if (n[1] != 0)
				n[0]++;
			n[1] = ft_printvar(string[n[0]], ap, n[1]);
			if (n[1] < 0)
				return (-1);
			n[2] += n[1];
			if (n[1] != 0)
				n[3]++;
			else
				n[4]++;
		}
		n[0]++;
	}
	return (0);
}
