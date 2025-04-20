/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:07:59 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 13:52:22 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_calloc() function allocates memory for an array of 'nmemb' elements
 * of 'size' bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero. If 'nmemb' or 'size' is 0, then ft_calloc()
 * returns a unique pointer value that can later be passed to free().
 * 
 * Functionality:
 * Checks if 'nmemb' or 'size' is 0. If so, malloc(1) and returns ft_memset().
 * ft_memset() takes a void pointer, integer (converted to unsigned char)
 * and number of bytes.
 * If 'nmemb' or 'size' != 0, a check for int overflow is made.
 * If no errors, malloc(nmemb * size) and ft_memset() 0 in those bytes.
 * 
 * Return value:
 * Returns a void pointer to that memory area, or NULL on any error. */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_len;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		return (ft_memset(ptr, 0, 1));
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	total_len = (nmemb * size);
	ptr = malloc(total_len);
	if (ptr == NULL)
		return (NULL);
	return (ft_memset(ptr, 0, total_len));
}
