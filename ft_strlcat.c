/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:03:05 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/24 15:30:06 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_strlcat() function concatenates strings and NUL-terminates the result.
 * It appends the NUL-terminated string 'src' to the end of 'dst';
 * at most 'size' - ft_strlen(dst) - 1 bytes, NUL-terminating the result.
 * 'size' = total size of the destination buffer, including NUL.
 * 
 * Functionality:
 * The function counts lengths of 'src' and 'dst' with ft_strlen().
 * Checks to ensure that 'size' > length of 'dst'.
 * Appends 'src' to 'dst' and inserts '\0' as the last character.
 * 
 * Return value:
 * Returns the total length of the string it tried to create, that means 
 * the initial length of 'dst' plus the length of 'src'.
 * Note that if 'size' <= 'dst', return is 'size' + length of 'src'. */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
