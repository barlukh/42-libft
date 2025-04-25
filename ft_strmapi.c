/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:15:26 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/25 09:59:54 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s_map;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	s_map = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s_map)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s_map[i] = f(i, s[i]);
		i++;
	}
	s_map[i] = '\0';
	return (s_map);
}
