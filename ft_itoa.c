/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:11:09 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/25 08:26:36 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Counts digit positions in 'n'
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

// Checks if 'n' is a negative integer
static int	ft_is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	size_t	positions;
	int		is_negative;
	char	*str;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	positions = ft_count_digits(n);
	is_negative = ft_is_negative(n);
	if (is_negative)
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
	if (is_negative)
		str[0] = '-';
	return (str);
}
