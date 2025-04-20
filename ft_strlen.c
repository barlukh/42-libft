/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:00:21 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 15:36:19 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_strlen() function calculates the length of the string.
 * 
 * Functionality:
 * Iterates through the 's' string and increases the 'i' counter each iteration.
 * 
 * Return value:
 * Returns the number of bytes 'i' in the string pointed to by 's'. */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
