/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:15:26 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/22 17:02:02 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function 'f' to each character of the string 's',
 * passing its index as the first argument and the character itself
 * as the second. A new string is created (using malloc()) to store
 * the results from the successive applications of 'f'.
 * 
 * Functionality:
 * Counts the length of 's' and malloc() accordingly with extra byte for '\0'.
 * Iterates through 's' and passes each char to function 'f' with its index 'i'.
 * Assigns returned value to the new string at the correct index.
 * Adds '\0' as the last character null-terminating the string.
 * 
 * Return value:
 * The string created from the successive applications of ’f’.
 * Returns NULL if the allocation fails. */

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
