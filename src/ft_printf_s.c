#include "../include/ft_printf.h"

int	ft_printf_s(va_list *ap, int *cnt)
{
	char	*s;
	int		temp;

	s = va_arg(*ap, char *);
	if (!s)
		temp = ft_putstr_fd_s("(null)", STDOUT_FILENO);
	else
		temp = ft_putstr_fd_s(s, STDOUT_FILENO);
	*cnt += temp;
	return (temp);
}
