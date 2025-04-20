/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:03:45 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 17:56:14 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Converts uppercase letter to lowercase.
 * 
 * Return value:
 * If 'c' is an uppercase letter, ft_tolower() returns its lowercase equivalent.
 * Otherwise, it returns c. */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
