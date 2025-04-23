/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 08:22:46 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/23 10:24:00 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function ’f’ to each character of the string passed as argument,
 * passing its index as the first argument. Each character is passed by
 * address to ’f’ so it can be modified if necessary.
 * 
 * Functionality:
 * Iterates through 's' and passes each char as a pointer
 * to function 'f' with its index 'i'. Passed value can be modified directly.
 * 
 * Return value:
 * None. */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
