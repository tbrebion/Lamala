#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i])
		i++;
	}
}

int	diff_str(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[i] == str[j])
		{

		}	
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	while (av[1][i])
	{
		j = i + 1;
		while (av[1][j])
		{
			
		}
	}
	return (0);
}
