/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:08:23 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 12:22:27 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_strdup() function returns a pointer to a new string
 * which is a duplicate of the string 's'. Memory for the new string
 * is obtained with malloc(), and can be freed with free().
 * 
 * Functionality:
 * Counts the length of 's' with the ft_strlen function and allocates memory
 * with malloc().
 * Iterates through 's' and copies values into newly allocated 'ptr' buffer.
 * Inserts '\0' as the last character.
 * 
 * Return value:
 * On success, the function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available. */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*ptr;
	size_t	i;

	s_len = ft_strlen(s);
	ptr = malloc(sizeof(char) * (s_len + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
