/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:42:44 by dpalmer           #+#    #+#             */
/*   Updated: 2023/05/04 13:48:29 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Returns the the number of characters in the initial part of a string that
* DO NOT include the characters in charset. */
size_t	ft_strcspn(const char *str, const char *charset)
{
	size_t	length;

	length = 0;
	while (str[length] && !ft_strchr(charset, str[length]))
		length++;
	return (length);
}

/* Returns the the number of characters in the initial part of a string that
* include the characters in charset. */
size_t	ft_strspn(const char *str, const char *charset)
{
	size_t	length;

	length = 0;
	while (str[length] && ft_strchr(charset, str[length]))
		length++;
	return (length);
}
