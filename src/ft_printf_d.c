#include "../include/ft_printf.h"

int	ft_printf_d(va_list *ap, int *cnt)
{
	int	n;
	int	temp;

	n = va_arg(*ap, int);
	temp = ft_putnbr_fd_s(n, STDOUT_FILENO);
	*cnt += temp;
	return (temp);
}
