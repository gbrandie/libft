#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
int				ft_atoi(const char *str);
void			ft_bzero(void *dst, size_t len);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memccpy(void *dest, const void *src, int c, size_t len);
void			*ft_memchr (const void *arr, int c, size_t n);
int				ft_memcmp(const void *buf1, const void *buf2, size_t count);
void			*ft_memcpy(void *dest, const void *src, size_t len);
void			*ft_memset(void *dst, int c, size_t len);
char			*ft_strchr(const char *string, int symbol);
char			*ft_strdup(const char *src);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlcpy (char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *string);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *string, const char *substring, \
																size_t len);
char			*ft_strrchr(const char *string, int symbol);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			*ft_memmove(void *dst, const void *src, size_t len);
#endif
