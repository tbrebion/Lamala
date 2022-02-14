/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:52:43 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/14 15:04:18 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include<unistd.h>
# include<stdio.h>
# include<stdio.h>
# include<string.h>
# include<sys/wait.h>
# include<fcntl.h>
# include"libft/libft.h"

void	child_process(char **av, char **envp, int *fd);
void	parent_process(char **av, char **envp, int *fd);
void	execute(char *av, char **envp);
void	error(void);
char	*find_path(char *cmd, char **envp);

#endif
