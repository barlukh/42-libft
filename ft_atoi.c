/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:07:12 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/25 07:41:23 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Checks if 'c' is a white-space character
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
	int		sign;
	int		result;
	size_t	i;	

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
	return (result * sign);
}
