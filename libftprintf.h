/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 22:41:35 by dparra-s          #+#    #+#             */
/*   Updated: 2026/08/10 22:41:35 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *string, ...);
int		ft_printvar(char c, va_list ap, int nret);
int		ft_printc(int c);
int		ft_printdi(int i);
int		ft_printu(unsigned int i);
void	ft_putunbr_fd(unsigned int n, int fd);
int		ft_printelse(int c, int nret);
int		ft_printps(char c, char *str);

#endif