/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:04:32 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 17:46:50 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_strrchr() function returns a pointer to the last occurrence
 * of the character 'c' in the string 's'.
 * 
 * Functionality:
 * Iterates through the 's' string and compares values to 'c'.
 * Variable 'c' is type casted to an unsigned char type on each comparison.
 * The terminating null byte is considered part of the string, so that if 'c'
 * is specified as '\0', the function returns a pointer to the terminator.
 * 
 * Return value:
 * Returns a pointer to the matched 'c' or NULL if the 'c' is not found. */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;
	size_t		i;

	last = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			last = &s[i];
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return ((char *)last);
}
