/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:38:11 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/21 17:32:46 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates memory (using malloc(3)) and returns an array of strings obtained
 * by splitting ’s’ using the character ’c’ as a delimiter. The array must
 * end with a NULL pointer.
 * 
 * Functionality:
 * 
 * 
 * Return value:
 * Returns the array of new strings resulting from the split.
 * NULL if the allocation fails. */

#include "libft.h"
#include <stdio.h>

static size_t	ft_word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	word_len;
	size_t	i;

	if (!s || !c)
		return (NULL);
	arr = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			arr[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	arr[i] = NULL;
	return (arr);
}

int main(void)
{
	char	*s = "Hello my name is Boris.";
	char	**arr = ft_split(s, ' ');
	size_t	i = 0;

	while(arr[i] != NULL)
	{
		printf("%s\n", arr[i]);
		i++;
	}

	free(arr);

	return (0);
}