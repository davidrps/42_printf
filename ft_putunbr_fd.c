/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 20:52:30 by dparra-s          #+#    #+#             */
/*   Updated: 2026/08/22 20:55:40 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putunbr_fd(unsigned int n, int fd)
{
	int	sum;

	sum = 0;
	if (n < 10)
		ft_putchar_fd(n + '0' + sum, fd);
	else
	{
		ft_putunbr_fd(n / 10, fd);
		ft_putunbr_fd(n % 10 + sum, fd);
	}
}
