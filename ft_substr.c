/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 07:13:13 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/21 09:24:39 by bgazur           ###   ########.fr       */
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
 * Allocates memory accordingly and copies the values to create the substring.
 * Inserts '\0' as the last character.
 * 
 * Return value:
 * Returns NULL on invalid 's' or failed malloc(),
 * an empty string that can be freed if the index is beyond 's',
 * or the pointer to the start of substring 'ss' if succesful. */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	ss_len;
	char	*ss;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	else if (s_len - start >= len)
		ss_len = len;
	else
		ss_len = s_len - start;
	ss = malloc(sizeof(char) * ss_len + 1);
	if (!ss)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
			ss[i++] = s[start++];
	ss[i] = '\0';
	return (ss);
}
