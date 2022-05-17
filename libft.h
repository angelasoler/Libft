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
 * @brief 
 * 
 * @param nptr 
 * @return int 
 */
int		ft_atoi(const char *nptr);

/**
 * @brief 
 * 
 * @param s 
 * @param n 
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief 
 * 
 * @param nmemb 
 * @param size 
 * @return void* 
 */
void	*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_isalnum(int c);

/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_isalpha(int c);

/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_isascii(int c);

/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_isdigit(int c);

/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_isprint(int c);

/**
 * @brief 
 * 
 * @param n 
 * @return char* 
 */
char	*ft_itoa(int n);

/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @param n 
 * @return void* 
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief 
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief 
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return void* 
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief 
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return void* 
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @param n 
 * @return void* 
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief 
 * 
 * @param c 
 * @param fd 
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief 
 * 
 * @param s 
 * @param fd 
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief 
 * 
 * @param n 
 * @param fd 
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief 
 * 
 * @param s 
 * @param fd 
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @return char** 
 */
char	**ft_split(char const *s, char c);

/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @return char* 
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief 
 * 
 * @param s 
 * @return char* 
 */
char	*ft_strdup(const char *s);

/**
 * @brief 
 * 
 * @param s 
 * @param f 
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief 
 * 
 * @param s1 
 * @param s2 
 * @return char* 
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief 
 * 
 * @param dest 
 * @param src 
 * @param count 
 * @return size_t 
 */
size_t	ft_strlcat(char *dest, const char *src, size_t count);

/**
 * @brief 
 * 
 * @param dest 
 * @param src 
 * @param size 
 * @return size_t 
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

/**
 * @brief 
 * 
 * @param str 
 * @return size_t 
 */
size_t	ft_strlen(const char *str);

/**
 * @brief 
 * 
 * @param s 
 * @param f 
 * @return char* 
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief 
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief 
 * 
 * @param big 
 * @param little 
 * @param len 
 * @return char* 
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @return char* 
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief 
 * 
 * @param s1 
 * @param set 
 * @return char* 
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
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_tolower(int c);

/**
 * @brief 
 * 
 * @param c 
 * @return int 
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
