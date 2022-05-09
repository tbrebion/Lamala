/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:27:01 by tbrebion          #+#    #+#             */
/*   Updated: 2022/04/28 12:38:19 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while(str[i])
	{
		ft_putchar((int)str[i]);
		i++;
	}
	return (i);
}

int	nb_len(int nb)
{
	int ret;

	ret = 0;
	if (nb >= 0 && nb <= 9)
		return (1);
	if (nb < 0)
		ret++;
	while (nb > 9 || nb < - 9)
	{
		nb /= 10;
		ret++;
	}
	ret++;
	return (ret);
}

int	ft_putnbr(int nb)
{
	int len;

	len = nb_len(nb);
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
	return (len);
}

int	hex_len(unsigned long int nb)
{
	int	ret;

	ret = 0;
	while (nb > 15)
	{
		nb /= 16;
		ret++;
	}
	ret++;
	return (ret);
}

int	put_nbr_hex(unsigned int nb)
{
	char *hex;
	int ret;

	ret = hex_len(nb);
	hex = "0123456789abcdef";
	if (nb > 15)
		put_nbr_hex(nb / 16);
	ft_putchar(hex[nb % 16]);
	return (ret);
}

int	ft_printf(const char *input, ...)
{
	int		i;
	int		char_count;
	va_list	args;

	i = 0;
	char_count = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			if (input[i + 1] == 's')
				char_count += ft_putstr(va_arg(args, char *));
			if (input[i + 1] == 'd')
				char_count += ft_putnbr(va_arg(args, int));
			if (input[i + 1] == 'x')
				char_count += put_nbr_hex(va_arg(args, unsigned int));
			if (input[i + 1] == '%')
				char_count += ft_putchar('%');
			i++;
		}
		else
			char_count += ft_putchar(input[i]);
		i++;
	}
	va_end(args);
	return (char_count);
}

#include <stdio.h>

int	main(void)
{
	char *str = " and my other friends \n";
	printf("#size : %d#\n", printf("Salut %s%s tu es a %d%%%% ID : %x\n", "my friends", str, 10, 16));
	printf("#################\n");
	printf("#################\n");
	ft_printf("#size : %d#\n", ft_printf("Salut %s%s tu es a %d%%%% ID : %x\n", "my friends", str, 10, 16));
	printf("#################\n");
	return (0);
}
