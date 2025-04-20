/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:07:12 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 14:32:09 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_atoi() function converts the initial portion of the string
 * pointed to by 'nptr' to int.
 * 
 * Functionality:
 * Skips the whitespaces (as defined in ft_isspace()).
 * Single occurence of '+' or '-' is allowed and stored (sign = +1 by default).
 * Converts and stores the number sequence in the 'result' variable.
 * Variable 'result' is of type long long int to handle INT_MAX + 1 -> INT_MIN.
 * No other overflow or underflow checks, in line with the atoi() function. 
 * 
 * Return value:
 * Returns the value in 'result' * 'sign' as an int (0 on error). */

#include "libft.h"

static int	ft_isspace(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if ((ch >= '\t' && ch <= '\r') || ch == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long long int	sign;
	long long int	result;
	size_t			i;	

	sign = 1;
	result = 0;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] != '\0' && ft_isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}
