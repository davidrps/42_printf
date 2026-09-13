/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:35:22 by dparra-s          #+#    #+#             */
/*   Updated: 2026/06/11 13:54:00 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_num_len(long int nb);
static	char		*ft_rev_str(char *str);

char	*ft_itoa(int nb)
{
	int			i;
	long int	sign;
	long int	nbr;
	char		*str;

	i = 0;
	sign = 0;
	nbr = (long int)nb;
	str = (char *)ft_calloc((ft_num_len(nbr) + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	if (nbr == 0)
		str[i++] = '0';
	if (nbr < 0)
		nbr *= --sign;
	while (nbr > 0)
	{
		str[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (sign)
		str[i++] = '-';
	str[i] = '\0';
	return (str = ft_rev_str(str));
}

static	int	ft_num_len(long int nb)
{
	int	length;

	length = 0;
	if (nb <= 0)
		length++;
	while (nb)
	{
		nb /= 10;
		length++;
	}
	return (length);
}

static char	*ft_rev_str(char *str)
{
	int		start;
	int		end;
	char	c;

	start = 0;
	end = ft_strlen(str) - 1;
	while (start < end)
	{
		c = str[start];
		str[start] = str[end];
		str[end] = c;
		start++;
		end--;
	}
	return (str);
}
