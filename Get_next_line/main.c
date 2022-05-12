/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:05:52 by tbrebion          #+#    #+#             */
/*   Updated: 2022/05/12 11:15:17 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int		fd;
	char	*gnl;

	gnl = "ok";
	(void)ac;
	fd = open(av[1], O_RDONLY);
	while (gnl)	
	{
		gnl = get_next_line(fd); 
		printf("%s", gnl);
		free(gnl);
	}
	return(0);
}