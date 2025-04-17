/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:02:09 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/17 08:26:29 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ptrd;
	const char	*ptrs;
	size_t		i;

	ptrd = (char *)dest;
	ptrs = (const char *)src;
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
