/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:45:16 by rschuppe          #+#    #+#             */
/*   Updated: 2019/03/29 10:54:30 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdbool.h>

# define BUFF_SIZE			512
# define MAX_FD				4096

# define MIN(a,b)			((a < b) ? (a) : (b))
# define MAX(a,b)			((a > b) ? (a) : (b))
# define ABS(n)				((n < 0) ? -(n) : (n))

# define SET_MAX(v)			v = ~(0 | 1 << (sizeof(v) * 8 - 1))
# define SET_UMAX(v)		v = ~0

typedef enum
{
	PQ_TYPE_MAX = false,
	PQ_TYPE_MIN = true
}	t_pq_type;

/*
**								STRCUCTURES
*/

typedef struct		s_node
{
	void			*content;
	size_t			content_size;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct		s_dlist
{
	struct s_node	*head;
	struct s_node	*tail;
	size_t			size;
}					t_dlist;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_pqueue_node
{
	int				priority;
	void			*content;
	size_t			content_size;
}					t_pqueue_node;

typedef struct		s_pqueue
{
	t_pqueue_node	*nodes;
	bool			type;
	size_t			length;
	size_t			size;
}					t_pqueue;

typedef struct		s_stack
{
	int				*head;
	int				len;
	int				size;
}					t_stack;

/*
**						FUNCTION DECLARATIONS
*/

/*
**					Memory
*/

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				*ft_memset(void *str, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/*
**					Chars
*/

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

/*
**					String
*/

size_t				ft_strlen(const char *s);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strdup(const char *src);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strchr(const char *src, int ch);
char				*ft_strrchr(const char *src, int ch);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(
	const char *haystack, const char *needle, size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_strlower(char *str);
char				*ft_strupper(char *str);

/*
**					Unicode chars and strings
*/

void				*ft_wmemset(wchar_t *str, int c, size_t n);
void				*ft_wmemmove(wchar_t *dst, const wchar_t *src, size_t len);
size_t				ft_wcslen(const wchar_t *s);
wchar_t				*ft_wcsnew(size_t size);
wchar_t				*ft_wcscpy(wchar_t *dest, const wchar_t *src);
wchar_t				*ft_wcsjoin(wchar_t const *s1, wchar_t const *s2);
wchar_t				*ft_wcsdup(const wchar_t *src);
void				ft_putwstr(wchar_t const *s);

/*
**					Convert
*/

int					ft_atoi(const char *str);
char				*ft_itoa(int n);
char				*ft_itoa_base(long long n, int base);
char				*ft_uitoa_base(unsigned long long num, int base);
char				*ft_dtoa(long double num, int acc);
char				*ft_stoa(ssize_t nbr);

/*
**					Output functions
*/

void				ft_putchar(char c);
void				ft_putwchar(wchar_t c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(long long n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(long long n, int fd);

/*
**					Linked list
*/

t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstnew_ptr(void const *content);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstpush(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					ft_lstremove(
	t_list **alst, t_list *el, void (*del)(void *, size_t));
int					ft_lstlen(t_list *lst);
t_list				*ft_lstget(t_list *lst, size_t lst_num);

/*
**					Dual linked list
*/

t_dlist				*ft_dlst_create();
t_node				*ft_create_node(void *content, size_t content_size);
t_node				*ft_create_node_ptr(void *content);
void				ft_dlst_push_front(t_dlist *list, t_node *node);
void				ft_dlst_push_back(t_dlist *list, t_node *node);
void				ft_dlst_remove_node(
	t_dlist *list, t_node *node, void (*del)(void *, size_t));
void				ft_dlst_merge(t_dlist *dst, t_dlist **src);
void				ft_dlst_del(t_dlist **list, void (*del)(void *, size_t));
void				*ft_dlst_get(t_dlist *list, size_t el_num);

/*
**					Stack
*/

t_stack				*ft_stack_new(int size);
void				ft_stack_extend(t_stack *stack, int add_size);
void				ft_stack_push(t_stack *stack, int value);
int					ft_stack_pop(t_stack *stack, int *value);
t_stack				*ft_stack_copy(t_stack *src);
void				ft_stack_delete(t_stack *stack);

/*
**					Binary heap
*/

t_pqueue			*pq_init(size_t length, t_pq_type is_min_heap);
int					pq_insert(t_pqueue *pqueue, void *content, int priority);
void				pq_delete(t_pqueue **pqueue, void (*del)(void *, size_t));
void				*pq_extract(t_pqueue *pqueue);
void				*pq_extract_ex(t_pqueue *pqueue, int *priority);
void				pq_ascent(t_pqueue *pqueue, size_t pos);
void				pq_drowning(t_pqueue *pqueue, size_t pos);
int					pq_swap_node(t_pqueue *pqueue, size_t a, size_t b);
int					pq_compare_priority(t_pqueue *pqueue, size_t a, size_t b);
int					pq_priority(t_pqueue *pqueue, size_t pos);

/*
**					Files
*/

int					get_next_line(const int fd, char **line);

/*
**					Other functions
*/

long double			ft_pow(long double num, int power);
void				ft_printchr(int counts, char c);
int					ft_str_fixlen(char **str, char ch, int width, int side);
void				ft_swap(int *a, int *b);
void				ft_swap_ptr(void **a, void **b);
int					throw_error(const char *title, const char *err);

#endif
