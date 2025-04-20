/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:05:08 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 15:38:48 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_strncmp() function compares the two strings 's1' and 's2'.
 * The comparison is done using unsigned characters.
 * 
 * Functionality:
 * Iterates 'n' number of times, returns on difference in comparison.
 * 
 * Return value:
 * Returns an integer indicating the result of the comparison, as follows:
 * 	• 0, if the 's1' and 's2' are equal;
 *  • a negative value if 's1' is less than 's2';
 *  • a positive value if 's1' is greater than 's2'.
 *	• If 'n' is zero, the return value is zero. */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
