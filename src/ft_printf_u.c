#include "../include/ft_printf.h"

int	ft_printf_u(va_list *ap, int *cnt)
{
	unsigned int	ui;
	int				temp;

	ui = va_arg(*ap, unsigned int);
	temp = ft_put_unsignednbr_fd_s(ui, STDOUT_FILENO);
	*cnt += temp;
	return (temp);
}
