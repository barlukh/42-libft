/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:17:35 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/24 10:46:11 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Testing file for the 'libft' project.
 * First, create the libft.a library with the 'make' command.
 * Second, compile tests.c with libft.a to create an executable file.
 * 
 * Functions *_fd are tested by reading from a stderr.log file;
 * The execuable must be there launched with ./a.out 2>stderr.log command.
 * 
 * Note: This testing method doesn't guarantee you to pass the prject. */

#include "libft.h"
#include <stdio.h>

void	ft_atoi_test(void)
{
	// Test 1
	if (-2147483648 == ft_atoi("-2147483648"))
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (2147483647 == ft_atoi("2147483647"))
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (0 == ft_atoi("a"))
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (-56 == ft_atoi("    -56"))
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (0 == ft_atoi("  ---56"))
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");
}

void	ft_bzero_test(void)
{
	char	buffer[6] = "BBBBBB";
	ft_bzero(buffer, 4);

	// Test 1
	if (buffer[0] == '\0')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (buffer[1] == '\0')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (buffer[2] == '\0')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (buffer[3] == '\0')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (buffer[4] == 'B')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (buffer[5] == 'B')
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");
}

void	ft_calloc_test(void)
{
	size_t	nmemb = 2;
	size_t	size = 3;
	char	*buffer = ft_calloc(nmemb, size);

	// Test 1
	if (buffer[0] == '\0')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (buffer[1] == '\0')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (buffer[2] == '\0')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (buffer[3] == '\0')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (buffer[4] == '\0')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (buffer[5] == '\0')
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");
	
	free(buffer);
}

void	ft_isalnum_test(void)
{
	// Test 1
	if (1 == ft_isalnum('a'))
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (1 == ft_isalnum('Z'))
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (1 == ft_isalnum('0'))
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (1 == ft_isalnum('9'))
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (0 == ft_isalnum(':'))
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (0 == ft_isalnum('}'))
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");
}

void	ft_isalpha_test(void)
{
	// Test 1
	if (1 == ft_isalpha('a'))
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (1 == ft_isalpha('Z'))
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (1 == ft_isalpha('u'))
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (1 == ft_isalpha('I'))
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (0 == ft_isalpha('9'))
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (0 == ft_isalpha('}'))
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");
}

void	ft_isascii_test(void)
{
	// Test 1
	if (1 == ft_isascii('a'))
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (1 == ft_isascii('Z'))
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (1 == ft_isascii('0'))
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (1 == ft_isascii('\0'))
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (0 == ft_isascii(128))
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (0 == ft_isascii(211))
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");
}

void	ft_isdigit_test(void)
{
	// Test 1
	if (1 == ft_isdigit('9'))
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (1 == ft_isdigit('0'))
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (1 == ft_isdigit('5'))
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (0 == ft_isdigit('\0'))
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (0 == ft_isdigit('a'))
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (0 == ft_isdigit(211))
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");
}

void	ft_isprint_test(void)
{
	// Test 1
	if (1 == ft_isprint('9'))
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (1 == ft_isprint('{'))
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (1 == ft_isprint(' '))
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (0 == ft_isprint('\0'))
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (0 == ft_isprint(31))
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (0 == ft_isprint(128))
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");
}

void	ft_itoa_test(void)
{
	char	*result0 = ft_itoa(657);
	char	*result1 = ft_itoa(-8475);
	char	*result2 = ft_itoa(2147483647);
	char	*result3 = ft_itoa(-2147483648);
	char	*result4 = ft_itoa(0);

	// Test 1
	if (result0[0] == '6')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (result0[3] == '\0')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result1[0] == '-')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result1[1] == '8')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");
	
	// Test 5
	if (result2[0] == '2')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (result2[9] == '7')
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");

	// Test 7
	if (result3[0] == '-')
		printf("Test 7: OK\n");
	else
		printf("Test 7: FAIL\n");

	// Test 8
	if (result3[10] == '8')
		printf("Test 8: OK\n");
	else
		printf("Test 8: FAIL\n");

	// Test 9
	if (result4[0] == '0')
		printf("Test 9: OK\n");
	else
		printf("Test 9: FAIL\n");

	free(result0);
	free(result1);
	free(result2);
	free(result3);
	free(result4);
}

void	ft_memchr_test(void)
{
	char	*result0 = (char *)ft_memchr("Hello world!", 'l', 13);
	char	*result1 = (char *)ft_memchr("Hello world!", 'd', 3);
	char	*result2 = (char *)ft_memchr("Hello world!", 'y', 13);
	char	*result3 = (char *)ft_memchr("Hello world!", '\0', 13);
	char	*result4 = (char *)ft_memchr("Hello world!", '\0', 12);

	// Test 1
	if (result0[0] == 'l' && result0[1] == 'l')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (result0[1] == 'l')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result1 == NULL)
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result2 == NULL)
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (result3[0] == '\0')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (result4 == NULL)
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");
}

void	ft_memcmp_test(void)
{
	// Test 1
	if (0 == ft_memcmp("Hello", "Hello", 5))
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (97 == ft_memcmp("Hellaa", "Hell", 5))
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (-111 == ft_memcmp("Hello", "Helloooo", 10))
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (0 == ft_memcmp("Hello", "Helloooo", 3))
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");
}

void	ft_memcpy_test(void)
{
	char	src[5] = "0000";
	char	dest[10] = "123456789";
	char	*result = (char *)ft_memcpy(dest, src, 4);

	// Test 1
	if (result[0] == '0')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (result[1] == '0')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result[3] == '0')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result[4] == '5')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (result[8] == '9')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (result[9] == '\0')
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");
}

void	ft_memmove_test(void)
{
	char	src0[5] = "0000";
	char	dest0[10] = "123456789";
	char	*result0 = (char *)ft_memmove(dest0, src0, 4);

	char	dest1[10] = "123456789";
	char	src1[5] = "0000";
	char	*result1 = (char *)ft_memmove(dest1, src1, 4);

	// Test 1
	if (result0[0] == '0')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (result0[4] == '5')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result0[9] == '\0')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result1[0] == '0')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (result1[5] == '6')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (result1[9] == '\0')
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");
}

void	ft_memset_test(void)
{
	char	buffer[6] = "BBBBBB";
	char	*result = ft_memset(buffer, 'A', 3);

	// Test 1
	if (result[0] == 'A')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (result[1] == 'A')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result[2] == 'A')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result[3] == 'B')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (result[4] == 'B')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (result[5] == 'B')
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");
}

void	ft_putchar_fd_test(void)
{
	ft_putchar_fd('a', 2);

    FILE *file = fopen("stderr.log", "r");
    if (file == NULL) {
        printf("Failed to open file\n");
        return ;
    }
	
	// Test 1
	char char1 = fgetc(file);
	
	if (char1 == EOF)
	{
        printf("Failed to read the file\n");
        fclose(file);
        return ;
	}

	if (char1 == 'a')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	char char2 = fgetc(file);
	
	if (char2 == EOF)
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

    fclose(file);
}

void	ft_putendl_fd_test(void)
{
	ft_putendl_fd("BB", 2);

    FILE *file = fopen("stderr.log", "r");
    if (file == NULL) {
        printf("Failed to open file\n");
        return ;
    }
	
	// Test 1
	char char1 = fgetc(file);
	
	if (char1 == EOF)
	{
        printf("Failed to read the file\n");
        fclose(file);
        return ;
	}

	if (char1 == 'a')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	char char2 = fgetc(file);
	
	if (char2 == 'B')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	char char3 = fgetc(file);
	
	if (char3 == 'B')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	char char4 = fgetc(file);
	
	if (char4 == '\n')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	char char5 = fgetc(file);
	
	if (char5 == EOF)
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");
	
	fclose(file);
}

void	ft_putnbr_fd_test(void)
{
	ft_putnbr_fd(-45, 2);

    FILE *file = fopen("stderr.log", "r");
    if (file == NULL) {
        printf("Failed to open file\n");
        return ;
    }
	
	// Test 1
	char char1 = fgetc(file);
	
	if (char1 == EOF)
	{
        printf("Failed to read the file\n");
        fclose(file);
        return ;
	}

	if (char1 == 'a')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	char char2 = fgetc(file);
	
	if (char2 == 'B')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	char char3 = fgetc(file);
	
	if (char3 == 'B')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	char char4 = fgetc(file);
	
	if (char4 == '\n')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	char char5 = fgetc(file);
	
	if (char5 == '-')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");
	
	// Test 6
	char char6 = fgetc(file);
	
	if (char6 == '4')
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");

	// Test 7
	char char7 = fgetc(file);
	
	if (char7 == '5')
		printf("Test 7: OK\n");
	else
		printf("Test 7: FAIL\n");

	// Test 8
	char char8 = fgetc(file);
	
	if (char8 == EOF)
		printf("Test 8: OK\n");
	else
		printf("Test 8: FAIL\n");

	fclose(file);
}

void	ft_putstr_fd_test(void)
{
	ft_putstr_fd("CC", 2);

    FILE *file = fopen("stderr.log", "r");
    if (file == NULL) {
        printf("Failed to open file\n");
        return ;
    }
	
	// Test 1
	char char1 = fgetc(file);
	
	if (char1 == EOF)
	{
        printf("Failed to read the file\n");
        fclose(file);
        return ;
	}

	if (char1 == 'a')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	char char2 = fgetc(file);
	
	if (char2 == 'B')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	char char3 = fgetc(file);
	
	if (char3 == 'B')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	char char4 = fgetc(file);
	
	if (char4 == '\n')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	char char5 = fgetc(file);
	
	if (char5 == '-')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");
	
	// Test 6
	char char6 = fgetc(file);
	
	if (char6 == '4')
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");

	// Test 7
	char char7 = fgetc(file);
	
	if (char7 == '5')
		printf("Test 7: OK\n");
	else
		printf("Test 7: FAIL\n");

	// Test 8
	char char8 = fgetc(file);
	
	if (char8 == 'C')
		printf("Test 8: OK\n");
	else
		printf("Test 8: FAIL\n");

	// Test 9
	char char9 = fgetc(file);
	
	if (char9 == 'C')
		printf("Test 9: OK\n");
	else
		printf("Test 9: FAIL\n");

	// Test 0
	char char10 = fgetc(file);
	
	if (char10 == EOF)
		printf("Test 0: OK\n");
	else
		printf("Test 0: FAIL\n");

	fclose(file);
}

void	ft_split_test(void)
{
	char	**result0 = ft_split("  Hello my name is Boris  ", ' ');
	char	**result1 = ft_split("", ' ');
	size_t	result0_len = 5;
	size_t	i = 0;

	// Test 1
	if (result0[0][0] == 'H')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (result0[1][0] == 'm')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result0[4][4] == 's')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result1[0] == NULL)
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");
	
	while (i < result0_len)
	{
		free(result0[i]);
		i++;
	}
	free(result0);
	free(result1[0]);
	free(result1);
}

void	ft_strchr_test(void)
{
	char	*result0 = ft_strchr("Hello world!", 'l');
	char	*result1 = ft_strchr("Hello world!", 'd');
	char	*result2 = ft_strchr("Hello world!", 'y');
	char	*result3 = ft_strchr("Hello world!", '\0');

	// Test 1
	if (result0[0] == 'l')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (result1[0] == 'd')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result2 == NULL)
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result3[0] == '\0')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");
}

void	ft_strdup_test()
{
	char	*result0 = ft_strdup("Hello world!");
	char	*result1 = ft_strdup("BORIS");
	char	*result2 = ft_strdup("");

	// Test 1
	if (result0[0] == 'H')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (result1[0] == 'B')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result1[5] == '\0')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result2[0] == '\0')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	free(result0);
	free(result1);
	free(result2);
}

void	ft_striteri_test_f(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = *c - 32;
}

void	ft_striteri_test(void)
{
	char	s[10] = "aaaaaaaaa";
	ft_striteri(s, &ft_striteri_test_f);

	// Test 1
	if (s[0] == 'A')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (s[1] == 'a')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (s[2] == 'A')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (s[3] == 'a')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");
	
	// Test 5
	if (s[8] == 'A')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (s[9] == '\0')
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");
}

void	ft_strjoin_test(void)
{
	char	*result0 = ft_strjoin("Hello", "Boris");
	char	*result1 = ft_strjoin("Hello", NULL);
	char	*result2 = ft_strjoin(NULL, "AAA");

	// Test 1
	if (result0[0] == 'H')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");
	
	// Test 2
	if (result0[9] == 's')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result0[10] == '\0')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result0[7] == 'r')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (result1 == NULL)
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (result2 == NULL)
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");

	free(result0);
	free(result1);
	free(result2);
}

void	ft_strlcat_test(void)
{
	char	dst0[50] = "123456";
	char	src0[13] = "Hello world!";
	size_t	result0 = ft_strlcat(dst0, src0, 7);

	char	dst1[50] = "123456";
	char	src1[13] = "Hello world!";
	size_t	result1 = ft_strlcat(dst1, src1, 10);

	char	dst2[50] = "123456";
	char	src2[13] = "";
	size_t	result2 = ft_strlcat(dst2, src2, 13);

	char	dst3[50] = "123456";
	char	src3[13] = "Hello world!";
	size_t	result3 = ft_strlcat(dst3, src3, 25);

	// Test 1
	if (dst0[6] == '\0' && result0 == 18)
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (dst1[6] == 'H' && result1 == 18)
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (dst1[9] == '\0' && result1 == 18)
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");
	
	// Test 4
	if (dst2[6] == '\0' && result2 == 6)
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (dst3[17] == '!' && result3 == 18)
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");
}

void	ft_strlcpy_test(void)
{
	char	dst0[13] = "123456";
	char	src0[13] = "Hello world!";
	size_t	result0 = ft_strlcpy(dst0, src0, 0);

	char	dst1[13] = "123456";
	char	src1[13] = "Hello world!";
	size_t	result1 = ft_strlcpy(dst1, src1, 3);

	char	dst2[13] = "123456";
	char	src2[13] = "";
	size_t	result2 = ft_strlcpy(dst2, src2, 0);

	char	dst3[13] = "123456";
	char	src3[13] = "Hello world!";
	size_t	result3 = ft_strlcpy(dst3, src3, 13);

	// Test 1
	if (dst0[6] == '\0' && result0 == 12)
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (dst1[0] == 'H' && result1 == 12)
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (dst1[2] == '\0' && result1 == 12)
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");
	
	// Test 4
	if (dst2[6] == '\0' && result2 == 0)
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (dst3[11] == '!' && result3 == 12)
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");
}

void	ft_strlen_test(void)
{
	// Test 1
	if (5 == ft_strlen("Hello"))
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (3 == ft_strlen("123"))
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (6 == ft_strlen("Hi mom"))
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");
}

char	ft_strmapi_test_f(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c - 32);
	return (c);
}

void	ft_strmapi_test(void)
{
	char	*result0 = ft_strmapi("aaaaaaaaa", &ft_strmapi_test_f);

	// Test 1
	if (result0[0] == 'A')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (result0[1] == 'a')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result0[2] == 'A')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result0[3] == 'a')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");
	
	// Test 5
	if (result0[8] == 'A')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (result0[9] == '\0')
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");

	free(result0);
}

void	ft_strncmp_test(void)
{
	// Test 1
	if (0 == ft_strncmp("Hello", "Hello", 5))
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (97 == ft_strncmp("Hellaa", "Hell", 5))
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (-111 == ft_strncmp("Hello", "Helloooo", 10))
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (0 == ft_strncmp("Hello", "Helloooo", 3))
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");
}

void	ft_strnstr_test(void)
{
	char	big0[17] = "Hello I am Boris";
	char	little0[3] = "am";
	char	*result0 = ft_strnstr(big0, little0, 16);

	char	big1[17] = "Hello I am Boris";
	char	little1[3] = "is";
	char	*result1 = ft_strnstr(big1, little1, 5);

	char	big2[17] = "Hello I am Boris";
	char	little2[6] = "Boris";
	char	*result2 = ft_strnstr(big2, little2, 15);

	// Test 1
	if (result0[3] == 'B')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (result1 == NULL)
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result2 == NULL)
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");
}

void	ft_strrchr_test(void)
{
	char	*result0 = ft_strrchr("Hello world!", 'l');
	char	*result1 = ft_strrchr("Hello world!", 'd');
	char	*result2 = ft_strrchr("Hello world!", 'y');
	char	*result3 = ft_strrchr("Hello world!", '\0');

	// Test 1
	if (result0[1] == 'd')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (result1[0] == 'd')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result2 == NULL)
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result3[0] == '\0')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");
}

void	ft_strtrim_test(void)
{
	char	*result0 = ft_strtrim("BrtsBoooBtrB", "rBt");
	char	*result1 = ft_strtrim("BrBBrr", "rB");
	char	*result2 = ft_strtrim("Boris is home", "");
	char	*result3 = ft_strtrim(NULL, "huhj");

	// Test 1
	if (result0[0] == 's')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");
	
	// Test 2
	if (result0[1] == 'B')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result0[4] == 'o')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result0[5] == '\0')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (result1[0] == '\0')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (result2[12] == 'e')
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");

	// Test 7
	if (result3 == NULL)
		printf("Test 7: OK\n");
	else
		printf("Test 7: FAIL\n");
	
	free(result0);
	free(result1);
	free(result2);
	free(result3);
}

void	ft_substr_test(void)
{
	char	*result0 = ft_substr("Boris is home", 0, 13);
	char	*result1 = ft_substr("Boris is home", 5, 17);
	char	*result2 = ft_substr("Boris is home", 7, 2);
	char	*result3 = ft_substr(NULL, 0, 13);

	// Test 1
	if (result0[0] == 'B')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");
	
	// Test 2
	if (result0[13] == '\0')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result1[0] == ' ')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result1[7] == 'e')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (result2[2] == '\0')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (result3 == NULL)
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");

	free(result0);
	free(result1);
	free(result2);
	free(result3);
}

void	ft_tolower_test(void)
{
	// Test 1
	if ('a' == ft_tolower('a'))
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if ('z' == ft_tolower('Z'))
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if ('0' == ft_tolower('0'))
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (';' == ft_tolower(';'))
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");
}

void	ft_toupper_test(void)
{
	// Test 1
	if ('A' == ft_toupper('a'))
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if ('Z' == ft_toupper('Z'))
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if ('0' == ft_toupper('0'))
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (';' == ft_toupper(';'))
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");
}

int	main(void)
{
	printf("ft_atoi\n");
	ft_atoi_test();

	printf("\nft_bzero\n");
	ft_bzero_test();

	printf("\nft_calloc\n");
	ft_calloc_test();

	printf("\nft_isalnum\n");
	ft_isalnum_test();

	printf("\nft_isalpha\n");
	ft_isalpha_test();

	printf("\nft_isascii\n");
	ft_isascii_test();

	printf("\nft_isdigit\n");
	ft_isdigit_test();

	printf("\nft_isprint\n");
	ft_isprint_test();

	printf("\nft_itoa\n");
	ft_itoa_test();

	printf("\nft_memchr\n");
	ft_memchr_test();

	printf("\nft_memcmp\n");
	ft_memcmp_test();

	printf("\nft_memcpy\n");
	ft_memcpy_test();

	printf("\nft_memmove\n");
	ft_memmove_test();

	printf("\nft_memset\n");
	ft_memset_test();

	printf("\nft_putchar_fd\n");
	ft_putchar_fd_test();

	printf("\nft_putendl_fd\n");
	ft_putendl_fd_test();

	printf("\nft_putnbr_fd\n");
	ft_putnbr_fd_test();

	printf("\nft_putstr_fd\n");
	ft_putstr_fd_test();

	printf("\nft_split\n");
	ft_split_test();

	printf("\nft_strchr\n");
	ft_strchr_test();

	printf("\nft_strdup\n");
	ft_strdup_test();

	printf("\nft_striteri\n");
	ft_striteri_test();

	printf("\nft_strjoin\n");
	ft_strjoin_test();

	printf("\nft_strlcat\n");
	ft_strlcat_test();

	printf("\nft_strlcpy\n");
	ft_strlcpy_test();
	
	printf("\nft_strlen\n");
	ft_strlen_test();

	printf("\nft_strmapi\n");
	ft_strmapi_test();

	printf("\nft_strncmp\n");
	ft_strncmp_test();

	printf("\nft_strnstr\n");
	ft_strnstr_test();
	
	printf("\nft_strrchr\n");
	ft_strrchr_test();

	printf("\nft_strtrim\n");
	ft_strtrim_test();

	printf("\nft_substr\n");
	ft_substr_test();

	printf("\nft_tolower\n");
	ft_tolower_test();

	printf("\nft_toupper\n");
	ft_toupper_test();

	return (0);
}