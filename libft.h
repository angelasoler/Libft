/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:01:26 by asoler            #+#    #+#             */
/*   Updated: 2022/04/23 01:21:38 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

/**
 * @brief function converts the initial portion of
 		  the string pointed to by nptr to int
 * 
 * @param nptr 
 * @return int The converted value.
 */
int		ft_atoi(const char *nptr);

/**
 * @brief function erases the data in the n bytes of
 		  the memory starting at the location pointed
		  to by s, by writing zeros (bytes containing
		  '\0') to that area.
 * 
 * @param s 
 * @param n the amount of bytes of s to travel
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief function allocates size bytes and returns a
 		  pointer to the allocated memory.  The memory
		  is not initialized.  If size is 0, then malloc()
		  returns either NULL, or a unique pointer value that
		  can later be successfully passed to free().
 * 
 * @param nmemb the amount of blocks to be allocate
 * @param size size of block to be allocate
 * @return void* functions return a pointer to the allocated
 			memory, which is suitably aligned for any built-in
			type.  On error, these functions return NULL.
			NULL may also be returned by a successful call to
			calloc() with nmemb or size equal to zero.
 */
void	*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief checks for an alphanumeric character; it is equivalent
 		  to (isalpha(c) || isdigit(c)).
 * 
 * @param c 
 * @return int 
 */
int		ft_isalnum(int c);

/**
 * @brief checks for an alphabetic character;
 		  in the standard "C" locale, it is equivalent to
		  (isupper(c) || is lower(c)). In some locales, there
		  may be additional characters for which isalpha() is
		  true—letters which are neither uppercase nor lowercase.
 * 
 * @param c 
 * @return int The values returned are nonzero if the character c
 			falls into the tested class, and zero if not.
 */
int		ft_isalpha(int c);

/**
 * @brief checks whether c is a 7-bit unsigned char value that fits
 		  into the ASCII character set
 * 
 * @param c 
 * @return int  int The values returned are nonzero if the character c
 			falls into the tested class, and zero if not.
 */
int		ft_isascii(int c);

/**
 * @brief checks for a digit (0 through 9).
 * 
 * @param c 
 * @return int  int The values returned are nonzero if the character c
 			falls into the tested class, and zero if not.
 */
int		ft_isdigit(int c);

/**
 * @brief checks for any printable character including space.
 * 
 * @param c 
 * @return int  int The values returned are nonzero if the character c
 			falls into the tested class, and zero if not.
 */
int		ft_isprint(int c);

/**
 * @brief coverts the integer n into a character string.
 * 
 * @param n integer to convert.
 * @return char* a pointer to n converted to string
 */
char	*ft_itoa(int n);

/**
 * @brief scans the initial n bytes of the memory area pointed to by
		s for the first instance  of c.  Both c and the bytes of the memory
		area pointed to by s are interpreted as unsigned char.
 * 
 * @param s string tio search into
 * @param c char search for
 * @param n the amount of byte to travel
 * @return void* return a pointer to the matching byte or NULL if the
 			character does not occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief function compares the first n bytes (each interpreted as
 			unsigned char) of the memory areas s1 and s2.
 * 
 * @param s1 
 * @param s2 
 * @param n amount of bytes to compare
 * @return int  an integer less than, equal to, or greater than zero if the
 				first n bytes of s1 is found, respectively, to be less
				than, to match, or be greater than the first n bytes of s2.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief copies n bytes from memory area src to memory area dest.
 		  The memory areas must not overlap.
		  Use memmove(3) if the memory areas do overlap.
 * 
 * @param dest memory area to copy to
 * @param src memory area to copy from
 * @param n amount of bytes to compare
 * @return void* 
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief copies  n  bytes from memory area src to memory area dest.
 			The memory areas may overlap: copying takes place as though
			the bytes in src are first copied into a temporary array
			that does not overlap src or dest, and the bytes are then
			copied from the temporary array to dest.
 * 
 * @param dest memory area to copy to
 * @param src memory area to copy from
 * @param n amount of bytes to compare
 * @return void* 
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief fills the first n bytes of the memory area pointed to by s
 		  with the constant byte c.
 * 
 * @param s memory to edit
 * @param c memory to copy into n bytes of s
 * @param n amount of bytes to fill with c
 * @return void* 
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief Outputs the character ’c’ to the given file
		  descriptor.
 * 
 * @param s The character to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string ’s’ to the given file descriptor
		  followed by a newline
 * 
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer ’n’ to the given file
		  descriptor.
 * 
 * @param n The integer to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief Outputs the string ’s’ to the given file
		descriptor.
 * 
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Allocates (with malloc(3)) and returns an array
		of strings obtained by splitting ’s’ using the
		character ’c’ as a delimiter. The array must end
		with a NULL pointer.
 * 
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return char** The array of new strings resulting from the split.
				  NULL if the allocation fails.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief function returns a pointer to the first occurrence
 		  of the character c in the string s.
 * 
 * @param s string to search into.
 * @param c The serched character.
 * @return char* a pointer to the matched character or NULL if the
 				character is not found.  The terminating null byte
				is considered part of the string, so that if c is
				specified as '\0', these functions return a pointer
				to the terminator.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief function returns a pointer to a new string which is a duplicate
 		  of the string s.  Memory for the new string is obtained with
		  malloc(3), and can be freed with free(3).
 * 
 * @param s 
 * @return char* On success returns a pointer to the duplicated string.
 */
char	*ft_strdup(const char *s);

/**
 * @brief Applies the function ’f’ on each character of
		  the string passed as argument, passing its index
		  as first argument. Each character is passed by
		  address to ’f’ to be modified if necessary.
 * 
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Allocates (with malloc(3)) and returns a new
		  string, which is the result of the concatenation
		  of ’s1’ and ’s2’.
 * 
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return char* The new string.
				 NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief appends the NUL-terminated string src to the end of dest.
 		  It will append at most size strlen(dest) - 1 bytes,
		  NUL-terminating the result. take the full size of the
		  buffer (not just the length) and guarantee to NUL-
		  terminate the result (as long as there is at least one
		  byte free in dest) both src and dst must be NUL-terminated
 * 
 * @param dest pointer to copy into.
 * @param src pointer to copy from.
 * @param count the total bytes of dest
 * @return size_t the total length of the string they tried to
 		  create. that means the initial length of dst plus the
		  length of src.  While this may seem somewhat confusing,
		  it was done to make truncation detection simple.

		  Note, however, that if strlcat() traverses size characters
		  without finding a NUL, the length of the string
		  is considered to be size and the destination string will
		  not be NUL-terminated (since there was no space for
		  the NUL).  This keeps strlcat() from running off the end
		  of a string.  In practice this should not happen
		  (as it means that either size is incorrect or that dst is
		  not a proper “C” string).  The check exists to
		  prevent potential security problems in incorrect code.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t count);

/**
 * @brief  function copies up to size - 1 characters from the 
 			NUL-terminated string src to dest, NUL-terminating the result.
			strlcpy take the full size of the buffer (not just
			the length) and guarantee to NUL-terminate the result
			(as long as size is larger than 0). Note that a byte
			for the NUL should be included in size.  Also note that
			only operate on true “C” strings. This means that src
			must be NUL-terminated.
 * 
 * @param dest pointer to copy into.
 * @param src pointer to copy from.
 * @param size the amount of char to copy counting null terminator
 * @return size_t the total length of src.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

/**
 * @brief function calculates the length of the string pointed
 			to by s, excluding the terminating null byte ('\0').
 * 
 * @param str 
 * @return size_t 
 */
size_t	ft_strlen(const char *str);

/**
 * @brief Applies the function ’f’ to each character of the
		string ’s’, and passing its index as first argument
		to create a new string (with malloc(3)) resulting
		from successive applications of ’f’.
 * 
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return char* The string created from the successive
 			applications of ’f’.
			Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Compares only the first (at most) n bytes of s1 and s2.
 			The locale is not taken into account (for
			a locale-aware comparison, see strcoll(3)).
			It returns an integer less than, equal to,
			or greater than zero if s1 is found,
			respectively, to be less than, to match,
			or be greater than s2.
 * 
 * @param s1 
 * @param s2 
 * @param n number of bytes to compare
 * @return int functions return an integer less than,
 			equal to, or greater than zero if s1 (or
			the first n bytes thereof) is found,
			respectively, to be less than, to match,
			or be greater than s2.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief function locates the first occurrence of the
 			null-terminated string little in the string
			big, where not more than len characters are
			searched.  Characters that appear after a ‘\0’
			character are not searched.
 * 
 * @param big string to search into.
 * @param little string to search for into big.
 * @param len len of big to travel.
 * @return char* f little is an empty string, big is returned;
 			if little occurs nowhere in big, NULL is returned;
			otherwise a pointer to the first character of the
			first occurrence of little is returned.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief char* function returns a pointer to the last
		  occurrence of the character c in the string s.
 * 
 * @param s string to search into.
 * @param c caracter to search for.
 * @return a pointer to the matched character or NULL if 
 			the character is not found.  The terminating
			null byte is considered part of the string, so 
			that if c is specified as '\0', these functions 
			return a pointer to the terminator.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief Allocates (with malloc(3)) and returns a copy of
		’s1’ with the characters specified in ’set’ removed
		from the beginning and the end of the string.
 * 
 * @param s1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return char* The trimmed string.
			NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief 	Allocates (with malloc(3)) and returns a substring
			from the string ’s’.
			The substring begins at index ’start’ and is of
			maximum size ’len’.
 * 
 * @param s The string from which to create the substring.
			start: The start index of the substring in the
			string ’s’.
 * @param start The start index of the substring in the
				string ’s’.
 * @param len The maximum length of the substring.
 * @return 	char* The substring.
			NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief These functions convert uppercase letters to lowercase
 * 
 * @param c The int to be converted. If the argument c is 
 			of type char, it must be cast to unsigned char
 * @return int The converted letter, or c if the conversion
 			was not possible.
 */
int		ft_tolower(int c);

/**
 * @brief These functions convert lowercase letters to uppercase
 * 
 * @param c The int to be converted. If the argument c is 
 			of type char, it must be cast to unsigned char
 * @return int The converted letter, or c if the conversion
 			was not possible.
 */
int		ft_toupper(int c);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief	 Allocates (with malloc(3)) and returns a new node.
			The member variable ’content’ is initialized with
			the value of the parameter ’content’. The variable
			’next’ is initialized to NULL.
 * 
 * @param content The content to create the node with.
 * @return t_list* The new node.
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief Adds the node ’new’ at the beginning of the list.
 * 
 * @param lst	 The address of a pointer to the first link of
				a list.
 * @param new	 The address of a pointer to the node to be
				added to the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Counts the number of nodes in a list.
 * 
 * @param lst The beginning of the list.
 * @return int The length of the list.
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief Returns the last node of the list.
 * 
 * @param lst The beginning of the list.
 * @return t_list* Last node of the list.
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Adds the node ’new’ at the end of the list.
 * 
 * @param lst 	The address of a pointer to the first link of
				a list.
 * @param new 	The address of a pointer to the node to be
				added to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief	 Takes as a parameter a node and frees the memory of
			the node’s content using the function ’del’ given
			as a parameter and free the node. The memory of
			’next’ must not be freed.
 * 
 * @param lst The node to free.
 * @param del 	The address of the function used to delete
				the content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/**
 * @brief	 Deletes and frees the given node and every
			successor of that node, using the function ’del’
			and free(3).
			Finally, the pointer to the list must be set to
			NULL.
 * 
 * @param lst The address of a pointer to a node.
 * @param del 	The address of the function used to delete
				the content of the node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*));

/**
 * @brief 	Iterates the list ’lst’ and applies the function
			’f’ on the content of each node.
 * 
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on
			the list.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief 	Iterates the list ’lst’ and applies the function
			’f’ on the content of each node. Creates a new
			list resulting of the successive applications of
			the function ’f’. The ’del’ function is used to
			delete the content of a node if needed.
 * 
 * @param lst 	The address of a pointer to a node.
 * @param f 	The address of the function used to iterate on
				the list.
 * @param del 	The address of the function used to delete
				the content of a node if needed.
 * @return t_list* 	The new list.
					NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
