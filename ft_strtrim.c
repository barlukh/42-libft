/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:56:14 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/21 14:14:42 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates memory (using malloc()) and returns a copy of ’s1’
 * with characters from ’set’ removed from the beginning and the end.
 * 
 * Functionality:
 * Checks if 's1' is a valid input.
 * Counts the length of 's1' using ft_strlen() function.
 * Sets 'start' and 'end' values through checks done with ft_strchr() function.
 * Final string is trimmed with the help of the ft_substr() function.
 * 
 * Return value:
 * Returns NULL on invalid 's1' or 'set', or failed malloc(),
 * or the pointer to the start of trimmed string 's1' if succesful. */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
