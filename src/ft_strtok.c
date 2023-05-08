/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:53:47 by dpalmer           #+#    #+#             */
/*   Updated: 2023/05/08 11:12:24 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Be aware that strtok modifies the original string. Best practice is to
* create a copy of the string before passing to strtok. */
char	*ft_strtok(char *restrict str, const char *restrict delim)
{
	static char	*head;
	char		*result;

	if (str)
		head = str;
	result = head + ft_strspn(head, delim);
	head = result + ft_strcspn(head, delim);
	if (*head)
	{
		*head = '\0';
		head++;
	}
	if (*result)
		return (result);
	else
		return (NULL);
}
