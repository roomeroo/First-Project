
#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	ft_isalpha (int c);
int	ft_isdigit (int c);
int	ft_isalnum (int c);
int	ft_isascii (int c);
int	ft_isprint (int c);
int	ft_strlen (char *c);

#endif
