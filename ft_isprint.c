/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:58:51 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 16:33:55 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks for any printable character including space.
 * 
 * Return value:
 * Returns 1 on True, or 0 on False. */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
