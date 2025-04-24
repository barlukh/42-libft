/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:48:46 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/24 10:03:00 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the integer ’n’ to the specified file descriptor.
 * 
 * Functionality:
 * Checks for the INT_MIN outlier and writes it with ft_putstr_fd().
 * Checks for a negative input and writes the '-' sign.
 * Recursively converts each digit to a character with the help of modulo.
 * All outputs are using write() and are done to the correct file descriptor.
 * 
 * Return value:
 * None. */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd('0' + (n % 10), fd);
}
