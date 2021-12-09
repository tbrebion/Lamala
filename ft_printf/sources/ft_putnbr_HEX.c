#include "../ft_printf.h"

void	ft_putnbr_hex(int nb)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (nb > 16)
		ft_putnbr_hex(nb / 16);
	ft_putchar(hex[nb % 16]);
}
