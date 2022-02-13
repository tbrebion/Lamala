/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:52:15 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/13 15:20:28 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int ac, char  **av, char **envp)
{
	int		fd[2];
	pid_t	pid1;

	if (ac == 5)
	{
		if (pipe(fd) == -1)
			//error();
		pid1 = fork();
		if (pid1 == -1)
			//error();
		if (pid1 == 0)
		   //chid_process(av,envpp, fd);
		waitpid(pid1, NULL, 0);
		//parent_process(av, envp, fd);
	}
	else
	{
		//ERROR
	}
	return (0);
}
