/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:06:12 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 14:06:10 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_memcmp() function compares the first 'n' bytes
 * (each interpreted as unsigned char) of the memory areas 's1' and 's2'.
 * 
 * Functionality:
 * Type casts both pointers to 'unsigned char *ptrs' to access their values.
 * Retains 'const' on both 'ptrs' pointers to preserve the immutability.
 * Iterates 'n' number of times, returns on difference in comparison.
 * 
 * Return value:
 * Returns an integer indicating the result of the comparison, as follows:
 * 	• 0, if the bytes in 's1' and 's2' are equal;
 *  • a negative value if 's1' is less than 's2';
 *  • a positive value if 's1' is greater than 's2'.
 *	• If 'n' is zero, the return value is zero. */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptrs1;
	const unsigned char	*ptrs2;
	size_t				i;

	ptrs1 = (const unsigned char *)s1;
	ptrs2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptrs1[i] != ptrs2[i])
			return (ptrs1[i] - ptrs2[i]);
		i++;
	}
	return (0);
}
