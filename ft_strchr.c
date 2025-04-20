/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:04:02 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 13:53:12 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_strchr() function returns a pointer to the first occurrence
 * of the character 'c' in the string 's'.
 * 
 * Functionality:
 * Iterates through the 's' string and compares values to 'c'.
 * Variable 'c' is type casted to an unsigned char type on each comparison.
 * The terminating null byte is considered part of the string, so that if 'c'
 * is specified as '\0', the function returns a pointer to the terminator.
 * 
 * Return value:
 * Returns a pointer to the matched 'c' or NULL if the character is not found. */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
