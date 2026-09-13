/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 02:12:14 by dparra-s          #+#    #+#             */
/*   Updated: 2026/06/03 02:21:46 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*actual;
	int		lst_size;

	lst_size = 0;
	if (!lst)
		return (0);
	actual = lst;
	while (actual != NULL)
	{
		actual = actual->next;
		lst_size++;
	}
	return (lst_size);
}
