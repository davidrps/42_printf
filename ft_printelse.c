/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printelse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 00:48:49 by dparra-s          #+#    #+#             */
/*   Updated: 2026/08/23 04:35:57 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printelse(int c, int nret)
{
	if (c == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	else if (c == '\0' || c == '-' || c == '+' || c == '*' || c == '.'
		|| c == '\'')
		return (-1);
	else if (c == ' ')
		return (0);
	else
	{
		ft_putchar_fd('%', 1);
		if (nret == 0)
			ft_putchar_fd(' ', 1);
		ft_putchar_fd(c, 1);
		if (nret == 0)
			return (3);
		else
			return (2);
	}
}
