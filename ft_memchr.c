/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:05:41 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 14:07:27 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_memchr() function scans the initial 'n' bytes of the memory area
 * pointed to by 's' for the first instance of 'c'.
 * Both 'c' and the bytes pointed to by 's' are interpreted as unsigned char.
 * 
 * Functionality:
 * Type casts the 'void *s' to 'unsigned char *ptrs' to access its values.
 * Retains 'const' on the 'ptrs' pointer to preserve the immutability.
 * Iterates through the 'ptrs' looking to match 'c', 'n' number of times.
 * 
 * Return value:
 * Returns a type casted void pointer to the matching byte or NULL
 * if the character does not occur in the given memory area. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptrs;
	size_t				i;

	ptrs = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptrs[i] == (unsigned char)c)
			return ((void *)&ptrs[i]);
		i++;
	}
	return (NULL);
}
