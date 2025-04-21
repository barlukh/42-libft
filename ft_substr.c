/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 07:13:13 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/21 11:08:32 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates memory (using malloc()) and returns a substring
 * from the string ’s’. The substring starts at index ’start’ 
 * and has a maximum length of ’len’.
 * 
 * Functionality:
 * Checks if 's' is a valid input.
 * Counts the length of 's' using ft_strlen() function.
 * If the 'start' index is beyond the end of 's', returns an empty string.
 * Sets the variable 'ss_len', depending if 'len' overextends the end of 's'.
 * Allocates memory accordingly and calls ft_memcpy() to do the copying.
 * Inserts '\0' as the last character.
 * 
 * Return value:
 * Returns NULL on invalid 's' or failed malloc(),
 * an empty string that can be freed if the index is beyond 's',
 * or the pointer to the start of substring 'ss' if successful. */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	start_i;
	size_t	ss_len;
	char	*ss;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	start_i = (size_t)start;
	if (start_i >= s_len)
		return (ft_strdup(""));
	else if (s_len - start_i >= len)
		ss_len = len;
	else
		ss_len = s_len - start_i;
	ss = malloc(sizeof(char) * ss_len + 1);
	if (!ss)
		return (NULL);
	ft_memcpy(ss, s + start_i, ss_len);
	ss[ss_len] = '\0';
	return (ss);
}
