/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:39:36 by dpalmer           #+#    #+#             */
/*   Updated: 2023/05/04 13:55:26 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

BOOL	ft_isspace(char c)
{
	if ((c >= '\t' && c <= '\r') || c == ' ')
		return (TRUE);
	return (FALSE);
}
