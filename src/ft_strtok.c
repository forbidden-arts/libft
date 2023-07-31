/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:53:47 by dpalmer           #+#    #+#             */
/*   Updated: 2023/07/31 12:34:48 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(char *restrict str, const char *restrict delim)
{
	static char	*head;
	char		*result;

	if (str)
		head = str;
	head += ft_strspn(head, delim);
	if (head == NULL || *head == '\0')
		return (NULL);
	result = head;
	head += ft_strcspn(head, delim);
	if (*head)
		*head++ = '\0';
	return (result);
}
