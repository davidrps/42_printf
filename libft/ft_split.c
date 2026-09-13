/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparra-s <dparra-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:35:22 by dparra-s          #+#    #+#             */
/*   Updated: 2026/08/11 09:07:29 by dparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_s(char const *str, char c);
static char		**ft_save_s(char const *s, char c, char **split, size_t s_len);
static void		ft_free_s(char **split, size_t s_len);

char	**ft_split(char const *s, char c)
{
	size_t	words;
	size_t	s_len;
	char	**split;

	if (!s)
		return (NULL);
	s_len = ft_strlen((char *)s);
	words = ft_count_s(s, c);
	split = (char **) ft_calloc(sizeof(char *), words + 1);
	if (!split)
		return (NULL);
	split = ft_save_s(s, c, split, s_len);
	if (!split)
	{
		ft_free_s(split, s_len);
		free(split);
		return (NULL);
	}
	else
		split[words] = NULL;
	return (split);
}

static size_t	ft_count_s(char const *str, char c)
{
	size_t	words;
	size_t	new_word;

	words = 0;
	new_word = 0;
	while (*str)
	{
		if (*str != c && !new_word)
		{
			new_word = 1;
			words++;
		}
		else if (*str == c)
			new_word = 0;
		str++;
	}
	return (words);
}

static char	**ft_save_s(char const *s, char c, char **split, size_t s_len)
{
	size_t	f[3];

	f[0] = 0;
	f[1] = 0;
	f[2] = 0;
	while (f[0] < s_len + 1 && s_len > 0)
	{
		if (s[f[0]] == c || !s[f[0]])
		{
			if (f[2] > 0)
			{
				split[f[1]] = (char *)ft_calloc(f[2] + 1, sizeof(char));
				if (!split[f[1]])
					return (NULL);
				ft_strlcpy(split[f[1]], (char *)&s[f[0] - f[2]], f[2] + 1);
				f[2] = 0;
				f[1]++;
			}
		}
		else
			f[2]++;
		f[0]++;
	}
	return (split);
}

static void	ft_free_s(char **split, size_t s_len)
{
	size_t	i;

	i = 0;
	while (i < s_len && s_len > 0)
	{
		free(split[i]);
		i++;
	}
}
