/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:05:41 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/17 12:43:22 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	uchar;
	size_t			i;

	ptr = (unsigned char *)s;
	uchar = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)ptr[i] == uchar)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
