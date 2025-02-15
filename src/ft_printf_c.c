#include "../include/ft_printf.h"

int	ft_printf_c(va_list *ap, int *cnt)
{
	char	c;
	int		temp;

	c = va_arg(*ap, int);
	temp = write(STDOUT_FILENO, &c, 1);
	*cnt += temp;
	return (temp);
}
