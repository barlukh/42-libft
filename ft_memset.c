/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:00:48 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 12:18:47 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_bzero() function fills the first 'n' bytes of the memory area
 * pointed to by 's' with the constant byte 'c'.
 * 
 * Functionality:
 * Type casts the 'void *s' to 'unsigned char *ptrs' to access its values.
 * Writes 'c', converted to unsigned char, into the byte on each iteration
 * as long as i < n.
 * 
 * Return value:
 * Returns a pointer to the memory area 's'. */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptrs;
	size_t			i;

	ptrs = (unsigned char *)s;
	i = 0;
	while (i < n)
		ptrs[i++] = (unsigned char)c;
	return (s);
}
