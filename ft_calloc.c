/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:07:59 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/25 07:58:48 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
