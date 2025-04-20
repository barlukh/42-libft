/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:02:36 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 15:12:21 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_strlcpy() function copies a string and NUL-terminates the result.
 * It copies up to 'size' - 1 characters from the NUL-terminated string
 * 'src' to 'dst', NUL-terminating the result.
 * 'size' = total size of the destination buffer, including NUL.
 * 
 * Functionality:
 * The function counts lengths of 'src' with ft_strlen().
 * Checks to ensure that 'size' != 0.
 * Copies 'src' to 'dst' and inserts '\0' as the last character.
 * 
 * Return value:
 * Returns the total length of the string it tried to create, that means 
 * the length 'src'. */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
