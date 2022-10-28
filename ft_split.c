/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:38:00 by dpalmer           #+#    #+#             */
/*   Updated: 2022/10/28 09:09:39 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int		words;
	char	*str;

	words = 0;
	str = (char *)s;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
		{
			while (*str && *str != c)
				str++;
			words++;
		}
	}
	return (words);
}

static int	wrdlen(char *str, char c)
{
	int	i;

	i = 0;
	while (*str == c)
		str++;
	while (str && str[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		w_count;
	int		i;
	char	*str;
	char	**result;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)s;
	w_count = word_count(str, c);
	result = (char **)ft_calloc(w_count + 1, sizeof(char *));
	if (!result)
		return (NULL);
	while (i < w_count)
	{
		while (*str == c)
			str++;
		result[i] = (char *)ft_calloc(wrdlen(str, c) + 1, sizeof(char));
		ft_strlcpy(result[i], ft_substr(str, 0, wrdlen(str, c)),
			wrdlen(str, c) + 1);
		str += (wrdlen(str, c) + 1);
		i++;
	}
	return (result);
}