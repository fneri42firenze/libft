#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_strlcat (char *a, char *b, unsigned int c);
int ft_strlcpy(char *a, char *b, unsigned int c);
int	ft_strlen(const char *c);
int	ft_strncmp(char *a, char *b, unsigned int c);
int ft_atoi (char *a);
char *ft_strdup(char *a);
void ft_bzero(void *a, size_t b);
void *ft_memset(void *a, int b, size_t c);
void *ft_memcpy(void *dest, const void *src, size_t n);
char *ft_strchr(const char *s, int c);
#endif