#include "../ft_printf.h"

void	ft_putunbr(unsigned int nb)
{
	char *res;

	if (nb >= 10)
	{
		ft_putunbr(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
}

