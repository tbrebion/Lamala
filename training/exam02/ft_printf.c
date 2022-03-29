/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:31 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/30 18:20:31 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
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
		return(ft_putstr("(null)"));
	while (str[i])
	{
		ft_putchar((int)str[i]);
		i++;
	}
	return (i);
}

int	nb_len(int i)
{
	int	len;

	len = 0;
	if (i >= 0 && i <= 9)
		return (1);
	if(i < 0)
		len++;
	while (i < -9 || i > 9)
	{
		i = i / 10;
		len++;
	}
	len++;
	return (len);
}

int	ft_putnbr(int nb)
{
	int	len;

	len = nb_len(nb);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
	return (len);
}

int	hex_len(unsigned long int n)
{
	int	i;

	i = 0;
	while (n > 15)
	{
		n = n / 16;
		i++;
	}
	i++;
	return (i);
}

int	ft_putnbr_hex(unsigned int nb)
{
	char	*hex;
	int		save;
	int		count;

	hex = "0123456789abcdef";
	save = nb;
	count = 0;
	if (nb > 15)
		ft_putnbr_hex(nb / 16);
	ft_putchar(hex[nb % 16]);
	count += hex_len(save);
	return (count);
}

int	ft_printf(const char *input, ...)
{
	int		i;
	int		char_count;
	va_list	args;

	i = 0;
	char_count = 0;
	va_start(args, input);
	while(input[i])
	{
		if (input[i] == '%')
		{
			if (input[i + 1] == 's')
				char_count += ft_putstr(va_arg(args, char *));
			if (input[i + 1] == 'd')
				char_count += ft_putnbr(va_arg(args, int));
			if (input[i + 1] == 'x')
				char_count += ft_putnbr_hex(va_arg(args, unsigned int));
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

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	ft_printf("Test : %d%%, %x, %s \nAurevoir !\n\n", atoi(av[1]), atoi(av[1]), av[2]);
	printf("Test : %d%%, %x, %s \nAurevoir !\n", atoi(av[1]), atoi(av[1]), av[2]);
	return (0);
}














