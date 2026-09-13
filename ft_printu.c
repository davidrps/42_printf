/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 20:34:50 by dparra-s          #+#    #+#             */
/*   Updated: 2026/08/22 23:01:27 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printu(unsigned int i)
{
	int	num;

	num = 0;
	if (i >= 0 && i <= 4294967295)
		ft_putunbr_fd(i, 1);
	else
		return (-1);
	while (i > 0)
	{
		i /= 10;
		num++;
	}
	return (num);
}