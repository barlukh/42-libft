/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:03:27 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 17:57:31 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Converts lowercase letter to uppercase.
 * 
 * Return value:
 * If 'c' is a lowercase letter, ft_toupper() returns its uppercase equivalent.
 * Otherwise, it returns 'c'. */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
