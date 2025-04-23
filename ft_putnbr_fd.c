/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:48:46 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/23 15:21:13 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the integer ’n’ to the specified file descriptor.
 * 
 * Functionality:
 * Uses the write() function to output to the correct file descriptor 'fd'.
 * 
 * Return value:
 * None. */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", 2);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 10)
		ft_putnbr_fd(n / 10, 2);
	ft_putchar_fd('0' + (n % 10), fd);
}

int main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
}