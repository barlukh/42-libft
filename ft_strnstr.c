/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:06:45 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 15:58:12 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_strnstr() function locates the first occurrence of the null-terminated
 * string 'little' in the string 'big', where not more than 'len' characters
 * are searched. Characters that appear after a ‘\0’ character are not searched.
 * 
 * Functionality:
 * Counts the lengths of 'big' and 'little'.
 * Iterates through the 'big' string and compares 'little' on each iteration.
 * Comparison is done using ft_strncmp() function.
 * Check is in place to not overstep beyond '\0' nor past the 'len' value.
 * 
 * Return value:
 * If 'little' is an empty string, 'big' is returned;
 * if 'little' occurs nowhere in 'big', NULL is returned;
 * otherwise a pointer to the first character of the first occurrence 
 * of 'little' is returned. */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_len;
	size_t	little_len;
	size_t	i;

	big_len = ft_strlen(big);
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	i = 0;
	while (i < big_len - little_len + 1 && i < len - little_len + 1)
	{
		if (ft_strncmp(big + i, little, little_len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
