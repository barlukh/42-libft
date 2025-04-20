/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:55:08 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/20 16:33:44 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks for a digit (0 through 9).
 *
 * Return value:
 * Returns 1 on True, or 0 on False. */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
