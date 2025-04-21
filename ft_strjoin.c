/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 09:30:22 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/21 11:13:16 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates memory (using malloc()) and returns a new string,
 * which is the result of concatenating ’s1’ and ’s2’.
 * 
 * Functionality:
 * Checks if 's1' and 's2' are valid inputs.
 * Counts the length of both strings using ft_strlen() function.
 * Allocates memory accordingly and calls ft_memcpy() to do the copying.
 * Inserts '\0' as the last character.
 * 
 * Return value:
 * Returns NULL on invalid 's1', 's2' or failed malloc(),
 * or the pointer to the start of string 's' if succesful. */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*s;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s = malloc(sizeof(char) * s1_len + s2_len + 1);
	if (!s)
		return (NULL);
	ft_memcpy(s, s1, s1_len);
	ft_memcpy(s + s1_len, s2, s2_len);
	s[s1_len + s2_len] = '\0';
	return (s);
}
