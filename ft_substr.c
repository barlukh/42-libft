/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 07:13:13 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/25 10:14:57 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	start_i;
	size_t	ss_len;
	char	*ss;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	start_i = (size_t)start;
	if (start_i >= s_len)
		return (ft_strdup(""));
	else if (s_len - start_i >= len)
		ss_len = len;
	else
		ss_len = s_len - start_i;
	ss = malloc(sizeof(char) * (ss_len + 1));
	if (!ss)
		return (NULL);
	ft_memcpy(ss, s + start_i, ss_len);
	ss[ss_len] = '\0';
	return (ss);
}
