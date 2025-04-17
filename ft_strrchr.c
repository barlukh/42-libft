/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:04:32 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/17 11:11:21 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*result;
	size_t	i;

	ptr = (char *)s;
	result = NULL;
	i = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == c)
			result = &ptr[i];
		i++;
	}
	if (ptr[i] == c)
		result = &ptr[i];
	return (result);
}
