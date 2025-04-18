/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:06:45 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/18 13:28:36 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_len;
	size_t	little_len;
	size_t	i;

	big_len = ft_strlen(big);
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	i = 0;
	while (i < big_len - little_len + 1 && i < len - little_len + 1)
	{
		if (ft_strncmp(big + i, little, little_len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
