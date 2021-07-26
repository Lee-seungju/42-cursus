/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:33:58 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:39:00 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

void	go_shell(char *path, int i, char **argv)
{
	int		j;
	char	**path_spl;
	char	**argv_new;
	int		len;

	j = -1;
	path_spl = ft_split(path + 5, ':');
	if (!path_spl)
		error_msg();
	argv_new = ft_split(argv[i], ' ');
	if (!argv_new)
		error_msg();
	len = 0;
	while (path_spl[len++])
		;
	while (j++ < len - 1)
		execve(
			ft_strjoin(
				ft_strjoin(path_spl[j], "/"), argv_new[0]), argv_new, 0);
}

void	pipe_fork(char *path, int argc, int i, char **argv)
{
	pid_t	pid;
	int		fd[2];

	if (i == argc - 2)
		go_shell(path, i, argv);
	if (pipe(fd) < 0)
		error_msg();
	pid = fork();
	if (pid > 0)
	{
		dup2(fd[0], 0);
		close(fd[1]);
		waitpid(pid, NULL, 0);
		pipe_fork(path, argc, ++i, argv);
	}
	else if (pid == 0)
	{
		dup2(fd[1], 1);
		close(fd[1]);
		go_shell(path, i, argv);
	}
	else
		error_msg();
}

void	makefd(int argc, char **argv, char **envp)
{
	int		fd[2];

	if (ft_strcmp(argv[1], "here_doc") == 0)
		fd[1] = open(argv[argc - 1],
				O_RDWR | O_CREAT | O_APPEND, 0644);
	else
		fd[1] = open(argv[argc - 1],
				O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (fd[1] < 0)
	{
		perror(argv[argc - 1]);
		exit(1);
	}
	dup2(fd[1], 1);
	fd[0] = open(argv[1], O_RDONLY);
	if (fd[0] < 0)
	{
		perror(argv[1]);
		pipe_fork_error(argc, argv, envp);
		exit(0);
	}
	dup2(fd[0], 0);
	close(fd[0]);
	close(fd[1]);
}

int	main(int argc, char **argv, char **envp)
{
	char	*path;

	if (argc < 5)
		error_msg();
	if (ft_strcmp(argv[1], "here_doc") == 0)
		heredoc(argv[2], argc, argv, envp);
	makefd(argc, argv, envp);
	while (**envp)
	{
		path = ft_strnstr(*envp, "PATH", 4);
		if (path)
			break ;
		envp++;
	}
	pipe_fork(path, argc, 2, argv);
}
