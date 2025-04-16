/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:00:48 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/16 12:04:42 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	uchar;
	size_t			i;

	ptr = (unsigned char *)s;
	uchar = (unsigned char)c;
	i = 0;
	while (i < n)
		ptr[i++] = uchar;
	return (s);
}
