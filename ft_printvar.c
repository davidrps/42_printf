/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printvar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 20:24:55 by dparra-s          #+#    #+#             */
/*   Updated: 2026/08/23 06:00:09 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_printvar(char c, va_list ap, int nret)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_printc(va_arg(ap, int));
	else if (c == 's' || c == 'p')
		count = ft_printps(c, va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		count = ft_printdi(va_arg(ap, int));
	else if (c == 'u')
		count = ft_printu(va_arg(ap, unsigned int));
	else if (c == 'x')
		count = 6;
	else if (c == 'X')
		count = 7;
	else
		count = ft_printelse(c, nret);
	return (count);
}
