/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:16:05 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/22 17:00:07 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(int ac, char **av)
{
	char	*line;
	int	fd;
//	int	i;

//	i = 0;
	(void)ac;	
	fd = open(av[1], O_RDONLY);
//	while (i++ <= 10)
//	{	
		line = get_next_line(fd);
		printf("%s", line);
//	}
	return (0);
}
