/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:01:22 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 14:05:14 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_bzero() function erases the data in the 'n' bytes of the memory
 * starting at the location pointed to by 's', by writing ('\0') to that area.
 * 
 * Functionality:
 * Type casts the 'void *s' to 'unsigned char *ptrs' to access its values.
 * Writes ('\0') into the byte on each iteration as long as i < n.
 * 
 * Return value:
 * None. */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptrs;
	size_t			i;

	ptrs = (unsigned char *)s;
	i = 0;
	while (i < n)
		ptrs[i++] = '\0';
}
