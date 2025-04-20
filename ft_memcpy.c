/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:01:50 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 14:07:11 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_memcpy() function copies 'n' bytes from memory area 'src'
 * to memory area 'dest'. The memory areas must not overlap. Use ft_memmove()
 * if the memory areas do overlap.
 * 
 * Functionality:
 * Type casts both pointers to 'unsigned char *' to access their values.
 * Retains 'const' on the 'ptrs' pointer to preserve the immutability.
 * Iterates 'n' number of times, copying from 'ptrs' to 'ptrd'.
 * 
 * Return value:
 * Returns a pointer to 'dest'. */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrd;
	const unsigned char	*ptrs;
	size_t				i;

	ptrd = (unsigned char *)dest;
	ptrs = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptrd[i] = ptrs[i];
		i++;
	}
	return (dest);
}
