/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heredoc_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:41:04 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:38:59 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	move(char **argv)
{
	int		i;

	i = 1;
	while (argv[++i])
		argv[i] = argv[i + 1];
	return (i);
}

char	*makepath(char **envp)
{
	char	*path;

	while (**envp)
	{
		path = ft_strnstr(*envp, "PATH", 4);
		if (path)
			break ;
		envp++;
	}
	return (path);
}

void	heredoc(char *eof, int argc, char **argv, char **envp)
{
	int		fd;
	char	*buf;
	char	*path;

	if (argc != 6)
		error_msg();
	buf = NULL;
	fd = open("here_doc", O_CREAT | O_RDWR | O_TRUNC, 0644);
	write(1, "pipe heredoc> ", 14);
	while (get_next_line(0, &buf) != 0)
	{
		if (ft_strcmp(buf, eof) == 0)
			break ;
		write(1, "pipe heredoc> ", 14);
		write(fd, buf, ft_strlen(buf));
		write(fd, "\n", 1);
	}
	close(fd);
	makefd(argc, argv, envp);
	argc = move(argv) - 1;
	path = makepath(envp);
	clear_temp();
	pipe_fork(path, argc, 2, argv);
}
