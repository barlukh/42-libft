/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:06:45 by bgazur            #+#    #+#             */
/*   Updated: 2025/04/26 10:34:00 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/** Converts an initial portion of a string to an integer
 * @param nptr String to be converted
 * @return Converted string as an int, '0' on error
 */
int		ft_atoi(const char *nptr);

/** Erases data in a memory by writing '\0' to that area
 * @param s Pointer to the starting location
 * @param n Bytes of the memory to be erased
 * @return None
 */
void	ft_bzero(void *s, size_t n);

/** Allocates memory for an array and sets that memory to zero
 * @param nmemb Number of elements in the array
 * @param n Size in bytes of each element
 * @return Void pointer to the memory area, 'NULL' on any error
 */
void	*ft_calloc(size_t nmemb, size_t size);

/** Checks for an alphanumeric character
 * @param c Character to check, passed as an int
 * @return 1 on True, 0 on False
 */
int		ft_isalnum(int c);

/** Checks for an alphabetic character
 * @param c Character to check, passed as an int
 * @return 1 on True, 0 on False
 */
int		ft_isalpha(int c);

/** Checks whether character fits into the ASCII character set (0 - 127)
 * @param c Character to check, passed as an int
 * @return 1 on True, 0 on False
 */
int		ft_isascii(int c);

/** Checks if a character is a digit
 * @param c Character to check, passed as an int
 * @return 1 on True, 0 on False
 */
int		ft_isdigit(int c);

/** Checks if a character is printable
 * @param c Character to check, passed as an int
 * @return 1 on True, 0 on False
 */
int		ft_isprint(int c);

/** Converts an integer to a string
 * @param n Int to be converted
 * @return String representing the int, 'NULL' if the allocation fails
 */
char	*ft_itoa(int n);

/** Adds a node at the end of a linked list
 * @param lst The address of a pointer to the first node of a list
 * @param new The address of a pointer to the node to be added
 * @return None
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/** Adds a node at the beginning of a linked list
 * @param lst The address of a pointer to the first node of a list
 * @param new The address of a pointer to the node to be added
 * @return None
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/** Deletes and frees a given node and all its successors
 * @param lst The address of a pointer to the node
 * @param del The address of the function used to delete the content
 * @return None
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/** Frees a content using passed function then frees a node itself
 * @param lst The node to free
 * @param del The address of the function used to delete the content
 * @return None
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/** Iterates through a list and applies a function to a content
 * @param lst The address of a pointer to a node
 * @param f The address of the function to apply to each node’s content
 * @return None
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/** Returns the last node of the list
 * @param lst The beginning of the list
 * @return Last node of the list
 */
t_list	*ft_lstlast(t_list *lst);

/** Iterates through a list, applies a function to a content creating a new list
 * @param lst The address of a pointer to a node
 * @param f The address of the function applied to each node’s content
 * @param del The address of the function used to delete a node’s content
 * @return New list, 'NULL' if the allocation fails
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/** Creates a new node in a linked list
 * @param content Content to store in the new node
 * @return Pointer to the new node
 */
t_list	*ft_lstnew(void *content);

/** Counts the number of nodes in a linked list
 * @param lst The beginning of the list
 * @return The length of the list
 */
int		ft_lstsize(t_list *lst);

/** Scans a memory area for the first instance of 'c'
 * @param s Pointer to the memory area
 * @param c Character to search for, passed as an int
 * @param n Number of bytes to search
 * @return Pointer to the matching byte, 'NULL' if no match
 */
void	*ft_memchr(const void *s, int c, size_t n);

/** Compares bytes of two memory areas
 * @param s1 Pointer to the first memory area
 * @param s2 Pointer to the second memory area
 * @param n Number of bytes to compare
 * @return '0' if equal, negative if 's1' < 's2', positive if 's1' > 's2'
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/** Copies bytes from one memory area to another; the areas must not overlap
 * @param dest Pointer to the destination memory area
 * @param src Pointer to the source memory area
 * @param n Number of bytes to copy
 * @return Pointer to the destination memory area
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/** Copies bytes from one memory area to another; the areas can overlap
 * @param dest Pointer to the destination memory area
 * @param src Pointer to the source memory area
 * @param n Number of bytes to copy
 * @return Pointer to the destination memory area
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/** Fills a memory area with a constant byte 'c'
 * @param s Pointer to the memory area
 * @param c Character to write into each byte, passed as an int
 * @param n Number of bytes to fill
 * @return Pointer to the memory area
 */
void	*ft_memset(void *s, int c, size_t n);

/** Outputs a character to a specified file descriptor 
 * @param c Character to output
 * @param fd File descriptor
 * @return None
 */
void	ft_putchar_fd(char c, int fd);

/** Outputs a string to a specified file descriptor, followed by a newline
 * @param s String to output
 * @param fd File descriptor
 * @return None
 */
void	ft_putendl_fd(char *s, int fd);

/** Outputs an integer to a specified file descriptor
 * @param n Integer to output
 * @param fd File descriptor
 * @return None
 */
void	ft_putnbr_fd(int n, int fd);

/** Outputs a string to a specified file descriptor
 * @param s String to output
 * @param fd File descriptor
 * @return None
 */
void	ft_putstr_fd(char *s, int fd);

/** Splits a string according to a specified delimiter
 * @param s String to split
 * @param c Delimiter
 * @return Array of new strings, 'NULL' if the allocation fails
 */
char	**ft_split(char const *s, char c);

/** Scans a string for the first instance of 'c'
 * @param s String to search
 * @param c Character to search for, passed as an int
 * @return Pointer to the matching location, 'NULL' if no match
 */
char	*ft_strchr(const char *s, int c);

/** Duplicates a string using dynamic memory allocation
 * @param s String to duplicate
 * @return Pointer to the duplicated string, 'NULL' if the allocation fails
 */
char	*ft_strdup(const char *s);

/** Applies a function to each character of a string, passed as a pointer
 * @param s String to iterate over
 * @param f Function to apply to each character of the string
 * @return None
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/** Concatenates two strings using dynamic memory allocation
 * @param s1 First string
 * @param s2 Second string
 * @return Pointer to the new string, 'NULL' if the allocation fails
 */
char	*ft_strjoin(char const *s1, char const *s2);

/** Concatenates two strings and NUL-terminates the result
 * @param dst Destination string
 * @param src String to append to the destination string
 * @param size Number of bytes to append (includes byte for NUL)
 * @return Length of the string it tried to create
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/** Copies a string and NUL-terminates the result
 * @param dst Destination array
 * @param scr Source string to copy to the detination array
 * @param size Number of byte to copy
 * @return Length of the string it tried to create
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/** Calculates the length of a string
 * @param s String to calculate the length of
 * @return Number of bytes in the passed string
 */
size_t	ft_strlen(const char *s);

/** Applies a function to each character of a string, creating a new string
 * @param s String to iterate over
 * @param f Function to apply to each character of the string
 * @return The string created, 'NULL' if the allocation fails
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/** Compares two strings
 * @param s1 First string
 * @param s2 Second string
 * @param n Number of bytes to compare
 * @return '0' if equal, negative if 's1' < 's2', positive if 's1' > 's2'
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/** Locates the first occurrence of a string in another string
 * @param big String to search in
 * @param little String to search for
 * @param n Number of bytes to search
 * @return Pointer to the first character of the first occurrence
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/** Scans a string for the last instance of 'c'
 * @param s String to search
 * @param c Character to search for, passed as an int
 * @return Pointer to the matching location, 'NULL' if no match
 */
char	*ft_strrchr(const char *s, int c);

/** Remove specified characters from the beginning and the end of a string
 * @param s1 String to trim
 * @param set Characters to remove
 * @return Pointer to the new string, 'NULL' if the allocation fails
 */
char	*ft_strtrim(char const *s1, char const *set);

/** Creates a substring using dynamic memory allocation
 * @param s String to make the substring from
 * @param start Starting index
 * @param len Length of the substring
 * @return Pointer to the new substring, 'NULL' if the allocation fails
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/** Converts uppercase letter to lowercase 
 * @param c Character to convert, passed as an int
 * @return Converted character
 */
int		ft_tolower(int c);

/** Converts lowercase letter to uppercase
 * @param c Character to convert, passed as an int
 * @return Converted character
 */
int		ft_toupper(int c);

#endif