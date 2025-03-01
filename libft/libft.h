/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:32:54 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/07 19:41:51 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>

typedef struct s_liblist
{
	void				*content;
	struct s_liblist	*next;
}	t_liblist;

typedef struct s_list
{
	long long		value;
	int				pos;
	int				index;
	int				cost_a;
	int				cost_b;
	int				cost_t;
	int				op_a;
	int				op_b;
	struct s_list	*next;
}	t_list;

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char	*str);
void		*ft_memset(void	*b, int c, size_t	len);
void		ft_bzero(void	*s, size_t	n);
void		ft_free_array(char **str);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void	*dst, const void	*src, size_t	lem);
size_t		ft_strlcpy(char	*dst, const char	*src, size_t dstsize);
size_t		ft_strlcat(char	*dst, char *src, size_t	dstsize);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_atoi(const char *str);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *s1);
char		*ft_substr(const char *s, unsigned int star, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
char		*ft_itoa(int n);
char		**ft_split(char const *s, char c);
t_list		*ft_lstnew(long long value);
void		ft_lstadd_front(t_liblist **lst, t_liblist *new);
int			ft_lstsize(t_list *lst);
t_liblist	*ft_lstlast(t_liblist *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_liblist *lst, void (*del)(void *));
void		ft_lstclear(t_liblist **lst, void (*del)(void *));
void		ft_lstiter(t_liblist *lst, void (*f)(void *));
t_liblist	*ft_lstmap(t_liblist *lst, void *(*f)(void *), void (*del)(void *));

#endif
