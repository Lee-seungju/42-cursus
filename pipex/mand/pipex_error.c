/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:55:15 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:39:50 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	clear_temp(void)
{
	char	*argv[3];

	argv[0] = "-f";
	argv[1] = "./temp";
	argv[2] = NULL;
	if (fork() == 0)
		execve("/bin/rm", argv, 0);
}

void	pipe_fork_error(char **argv, char **envp)
{
	int		fd;
	char	*path;

	while (**envp)
	{
		path = ft_strnstr(*envp, "PATH", 4);
		if (path)
			break ;
		envp++;
	}
	fd = open("./temp", O_CREAT | O_RDWR | O_TRUNC, 0644);
	fd = open("./temp", O_RDONLY);
	dup2(fd, 0);
	clear_temp();
	go_shell(path, 3, argv);
	exit(0);
}
