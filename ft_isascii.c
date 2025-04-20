/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:58:16 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 16:33:31 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks whether 'c' is a 7-bit unsigned char value
 * that fits into the ASCII character set ( 0 - 127).
 * 
 * Return value:
 * Returns 1 on True, or 0 on False. */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
