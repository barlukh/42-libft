/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:02:09 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/21 10:37:37 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_memmove() function copies 'n' bytes from memory area 'src'
 * to memory area 'dest'. Copying is done either from the first positon,
 * or last, depending on the order of the areas in the memory.  
 * 
 * Functionality:
 * Type casts both pointers to 'unsigned char *' to access their values.
 * Retains 'const' on the 'ptrs' pointer to preserve the immutability.
 * Iterates 'n' number of times, copying from 'ptrs' to 'ptrd'.
 * 
 * Return value:
 * Returns a pointer to 'dest'. */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrd;
	const unsigned char	*ptrs;
	size_t				i;

	ptrd = (unsigned char *)dest;
	ptrs = (const unsigned char *)src;
	if (ptrs < ptrd)
	{
		i = n;
		while (i > 0)
		{
			i--;
			ptrd[i] = ptrs[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
	return (dest);
}
