/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:03:45 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 16:34:13 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks for an uppercase letter.
 * 
 * Return value:
 * Returns 1 on True, or 0 on False. */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
