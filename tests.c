#include <stdio.h>
int	main(void)
{
	// ft_atoi
	printf("\nft_atoi\n");
	printf("Input: \"-2147483648\" | Return: %d\n", ft_atoi("-2147483648"));
	printf("Input: \"2147483647\" | Return: %d\n", ft_atoi("2147483647"));
	printf("Input: \"a\" | Return: %d\n", ft_atoi("a"));
	printf("Input: \"    -56\" | Return: %d\n", ft_atoi("    -56"));
	printf("Input: \"  ---56\" | Return: %d\n", ft_atoi("  ---56"));
	
	// ft_bzero
	printf("\nft_bzero\n");
	char buffer1[6] = "BBBBBB";
	int	i = 0;
	ft_bzero(buffer1, 4);
	printf("Input: \"BBBBBB\", 4 | Return: ");
	while (i < 6)
	{
		printf("%c", buffer1[i]);
		i++;
	}
	printf("\n");

	// ft_calloc
	size_t nmemb = 3;
	size_t size = 4;
	size_t i = 0;
	char *s = ft_calloc(nmemb, size);
	while (i < nmemb * size + 10)
	{
		printf("%d", s[i]);
		i++;
	}
	free(s);

	// ft_isalnum
	printf("\nft_isalnum\n");
	printf("Input: 'a' | Return: %d\n", ft_isalnum('a'));
	printf("Input: 'Z' | Return: %d\n", ft_isalnum('Z'));
	printf("Input: '0' | Return: %d\n", ft_isalnum('0'));
	printf("Input: ';' | Return: %d\n", ft_isalnum(';'));

	// ft_isalpha
	printf("\nft_isalpha\n");
	printf("Input: 'a' | Return: %d\n", ft_isalpha('a'));
	printf("Input: 'Z' | Return: %d\n", ft_isalpha('Z'));
	printf("Input: '0' | Return: %d\n", ft_isalpha('0'));
	printf("Input: ';' | Return: %d\n", ft_isalpha(';'));

	// ft_isascii
	printf("\nft_isascii\n");
	printf("Input: 'a' | Return: %d\n", ft_isascii('a'));
	printf("Input: ' ' | Return: %d\n", ft_isascii(' '));
	printf("Input: '\\0' | Return: %d\n", ft_isascii('\0'));
	printf("Input: '€' | Return: %d\n", ft_isascii(128));

	// ft_isdigit
	printf("\nft_isdigit\n");
	printf("Input: '0' | Return: %d\n", ft_isdigit('0'));
	printf("Input: '9' | Return: %d\n", ft_isdigit('9'));
	printf("Input: '\\0' | Return: %d\n", ft_isdigit('\0'));
	printf("Input: 'Z' | Return: %d\n", ft_isdigit('Z'));

	// ft_isprint
	printf("\nft_isprint\n");
	printf("Input: ';' | Return: %d\n", ft_isprint(';'));
	printf("Input: ' ' | Return: %d\n", ft_isprint(' '));
	printf("Input: '\\0' | Return: %d\n", ft_isprint('\0'));
	printf("Input: '€' | Return: %d\n", ft_isprint(128));

	// ft_memchr
	printf("\nft_memchr\n");
	printf("Input: \"Hello world!\", 'l', 13 | Return: %s\n", (char *)ft_memchr("Hello world!", 'l', 13));
	printf("Input: \"Hello world!\", 'd', 3 | Return: %s\n", (char *)ft_memchr("Hello world!", 'd', 3));
	printf("Input: \"Hello world!\", 'y', 13 | Return: %s\n", (char *)ft_memchr("Hello world!", 'y', 13));
	printf("Input: \"Hello world!\", '\\0', 13 | Return: %s\n", (char *)ft_memchr("Hello world!", '\0', 13));
	printf("Input: \"Hello world!\", '\\0', 12 | Return: %s\n", (char *)ft_memchr("Hello world!", '\0', 12));

	// ft_memcmp
	printf("\nft_memcmp\n");
	printf("Input: \"Hello\", \"Hello\", 5 | Return: %d\n", ft_memcmp("Hello", "Hello", 5));
	printf("Input: \"Hellaa\", \"Hell\", 5 | Return: %d\n", ft_memcmp("Hellaa", "Hell", 5));
	printf("Input: \"Hello\", \"Helloooo\", 10 | Return: %d\n", ft_memcmp("Hello", "Helloooo", 10));
	printf("Input: \"Hello\", \"Helloooo\", 3 | Return: %d\n", ft_memcmp("Hello", "Helloooo", 3));

	// ft_memcpy
	printf("\nft_memcpy\n");
	char src0[5] = "0000";
	char dest0[10] = "123456789";
	printf("Input: %s, %s, 4 | Return: ", dest0, src0);
	printf("%s\n", (char *)ft_memcpy(dest0, src0, 4));

	// ft_memmove
	printf("\nft_memmove\n");
	char src1[5] = "0000";
	char dest1[10] = "123456789";
	printf("Input: %s, %s, 4 | Return: ", dest1, src1);
	printf("%s\n", (char *)ft_memmove(dest1, src1, 4));

	// ft_memset
	printf("\nft_memset\n");
	char buffer0[6] = "BBBBBB";
	printf("Input: \"BBBBBB\", 'A', 3 | Return: %s\n", (char *)ft_memset(buffer0, 'A', 3));

	// ft_strchr
	printf("\nft_strchr\n");
	printf("Input: \"Hello world!\", 'l' | Return: %s\n", ft_strchr("Hello world!", 'l'));
	printf("Input: \"Hello world!\", 'y' | Return: %s\n", ft_strchr("Hello world!", 'y'));
	printf("Input: \"Hello world!\", '\\0' | Return: %s\n", ft_strchr("Hello world!", '\0'));

	// ft_strrchr
	printf("\nft_strrchr\n");
	printf("Input: \"Hello world!\", 'l' | Return: %s\n", ft_strrchr("Hello world!", 'l'));
	printf("Input: \"Hello world!\", 'y' | Return: %s\n", ft_strrchr("Hello world!", 'y'));
	printf("Input: \"Hello world!\", '\\0' | Return: %s\n", ft_strrchr("Hello world!", '\0'));

	// ft_strdup
	printf("\nft_strdup\n");
	printf("Input: \"Hello world!\" | Return: %s\n", ft_strdup("Hello world!"));
	printf("Input: \"BORIS\" | Return: %s\n", ft_strdup("BORIS"));
	printf("Input: \"\" | Return: %s\n", ft_strdup(""));

	// ft_strlcat
	printf("\nft_strlcat\n");
	char dst6[50] = "123456";
	char src6[13] = "Hello world!";
	printf("Input: dst \"123456\", src \"Hello world!\", 7 | Return: %zu, dst %s\n", ft_strlcat(dst6, src6, 7), dst6);
	char dst7[50] = "123456";
	char src7[13] = "Hello world!";
	printf("Input: dst \"123456\", src \"Hello world!\", 10 | Return: %zu, dst %s\n", ft_strlcat(dst7, src7, 10), dst7);
	char dst8[50] = "123456";
	char src8[13] = "";
	printf("Input: dst \"123456\", src \"\", 13 | Return: %zu, dst %s\n", ft_strlcat(dst8, src8, 13), dst8);
	char dst9[50] = "123456";
	char src9[13] = "Hello world!";
	printf("Input: dst \"123456\", src \"Hello world!\", 25 | Return: %zu, dst %s\n", ft_strlcat(dst9, src9, 25), dst9);

	// ft_strlcpy
	printf("\nft_strlcpy\n");
	char dst2[13] = "123456";
	char src2[13] = "Hello world!";
	printf("Input: dst \"123456\", src \"Hello world!\", 0 | Return: %zu, dst %s\n", ft_strlcpy(dst2, src2, 0), dst2);
	char dst3[13] = "123456";
	char src3[13] = "Hello world!";
	printf("Input: dst \"123456\", src \"Hello world!\", 3 | Return: %zu, dst %s\n", ft_strlcpy(dst3, src3, 3), dst3);
	char dst4[13] = "123456";
	char src4[13] = "";
	printf("Input: dst \"123456\", src \"\", 0 | Return: %zu, dst %s\n", ft_strlcpy(dst4, src4, 0), dst4);
	char dst5[13] = "123456";
	char src5[13] = "Hello world!";
	printf("Input: dst \"123456\", src \"Hello world!\", 13 | Return: %zu, dst %s\n", ft_strlcpy(dst5, src5, 13), dst5);

	// ft_strlen
	printf("\nft_strlen\n");
	printf("Input: \"Hello\" | Return: %zu\n", ft_strlen("Hello"));
	printf("Input: \"123\" | Return: %zu\n", ft_strlen("123"));
	printf("Input: \"Hi mom\" | Return: %zu\n", ft_strlen("Hi mom"));

	// ft_strncmp
	printf("\nft_strncmp\n");
	printf("Input: \"Hello\", \"Hello\", 5 | Return: %d\n", ft_strncmp("Hello", "Hello", 5));
	printf("Input: \"Hellaa\", \"Hell\", 5 | Return: %d\n", ft_strncmp("Hellaa", "Hell", 5));
	printf("Input: \"Hello\", \"Helloooo\", 10 | Return: %d\n", ft_strncmp("Hello", "Helloooo", 10));
	printf("Input: \"Hello\", \"Helloooo\", 3 | Return: %d\n", ft_strncmp("Hello", "Helloooo", 3));

	// ft_strnstr
	printf("\nft_strnstr\n");
	char big0[17] = "Hello I am Boris";
	char little0[3] = "am";
	printf("Input: \"Hello I am Boris\", \"am\", 16 | Return: %s\n", ft_strnstr(big0, little0, 16));
	char big1[17] = "Hello I am Boris";
	char little1[3] = "is";
	printf("Input: \"Hello I am Boris\", \"is\", 5 | Return: %s\n", ft_strnstr(big1, little1, 5));
	char big2[17] = "Hello I am Boris";
	char little2[6] = "Boris";
	printf("Input: \"Hello I am Boris\", \"Boris\", 15 | Return: %s\n", ft_strnstr(big2, little2, 15));

	// ft_tolower
	printf("\nft_tolower\n");
	printf("Input: 'a' | Return: '%c' (converted to ASCII)\n", ft_tolower('a'));
	printf("Input: 'Z' | Return: '%c' (converted to ASCII)\n", ft_tolower('Z'));
	printf("Input: '0' | Return: '%c' (converted to ASCII)\n", ft_tolower('0'));
	printf("Input: ';' | Return: '%c' (converted to ASCII)\n", ft_tolower(';'));

	// ft_toupper
	printf("\nft_toupper\n");
	printf("Input: 'a' | Return: '%c' (converted to ASCII)\n", ft_toupper('a'));
	printf("Input: 'Z' | Return: '%c' (converted to ASCII)\n", ft_toupper('Z'));
	printf("Input: '0' | Return: '%c' (converted to ASCII)\n", ft_toupper('0'));
	printf("Input: ';' | Return: '%c' (converted to ASCII)\n", ft_toupper(';'));
}