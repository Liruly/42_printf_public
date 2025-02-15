#include "../include/ft_printf.h"

// functions to address char/str
int	ft_putchar_fd_s(char c, int fd)
{
	return (write(fd, &c, 1));
}

int	ft_putstr_fd_s(char *s, int fd)
{
	if (!s)
		return (-1);
	return (write(fd, s, ft_strlen(s)));
}
