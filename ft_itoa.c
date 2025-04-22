/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:11:09 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/22 14:22:27 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates memory (using malloc()) and returns a string representing
 * the integer received as an argument.
 * 
 * Functionality:
 * Counts positions of 'n' with the helper ft_count_digits() function.
 * Casts 'n' into long long int to handle INT_MIN * -1.
 * Allocates appropriate memory using malloc(), accounting for negative sign.
 * Converts the int into string using modulo calculation.
 * 
 * Return value:
 * Returns the string representing the integer, NULL if the allocation fails. */

#include "libft.h"
#include <stdio.h>

static size_t	ft_count_digits(int n)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t			positions;
	char			*str;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	positions = ft_count_digits(n);
	if (n < 0)
	{
		positions++;
		n *= -1;
	}
	str = malloc(sizeof(char) * (positions + 1));
	if (!str)
		return (NULL);
	str[positions] = '\0';
	while (positions--)
	{
		str[positions] = n % 10 + '0';
		n /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
