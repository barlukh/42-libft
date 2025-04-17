/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:00:48 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/17 16:49:55 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptrs;
	size_t	i;

	ptrs = (char *)s;
	i = 0;
	while (i < n)
		ptrs[i++] = (unsigned char)c;
	return (s);
}
