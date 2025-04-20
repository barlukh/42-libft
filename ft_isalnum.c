/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:57:42 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 17:45:40 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks for an alphanumeric character;
 * equivalent to (ft_isalpha() || ft_isdigit()).
 * 
 * Return value:
 * Returns 1 on True, or 0 on False. */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
