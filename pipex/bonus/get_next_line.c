/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:39:39 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:38:58 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

int	input_new_line(char **backup, int nlen, char **line, int fd)
{
	char	*tmp;
	int		len;

	backup[fd][nlen] = '\0';
	*line = ft_strdup(backup[fd]);
	len = ft_strlen(backup[fd] + nlen + 1);
	if (!len)
	{
		free(backup[fd]);
		backup[fd] = 0;
		return (1);
	}
	tmp = ft_strdup(backup[fd] + nlen + 1);
	free(backup[fd]);
	backup[fd] = tmp;
	return (1);
}

int	signal_n(char *backup)
{
	int		i;

	i = 0;
	while (backup[i])
	{
		if (backup[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int	take_case_line(char **backup, int fd, char **line)
{
	int		i;

	if (backup[fd])
	{
		i = signal_n(backup[fd]);
		if (i >= 0)
			return (input_new_line(backup, i, line, fd));
		*line = ft_strdup(backup[fd]);
		free(backup[fd]);
		backup[fd] = 0;
		return (0);
	}
	*line = ft_strdup("");
	return (0);
}

int	get_next_line(int fd, char **line)
{
	char			buf[BUFFER_SIZE + 1];
	static char		*backup[255];
	int				rd_size;
	int				j;

	if (0 > fd || BUFFER_SIZE <= 0 || line == 0)
		return (-1);
	while (1)
	{
		rd_size = read(fd, buf, BUFFER_SIZE);
		if (rd_size <= 0)
			break ;
		buf[rd_size] = '\0';
		backup[fd] = ft_strjoin(backup[fd], buf);
		j = 0;
		while (backup[fd][j])
		{
			if (backup[fd][j] == '\n')
				return (input_new_line(backup, j, line, fd));
			j++;
		}
	}
	if (rd_size < 0)
		return (-1);
	return (take_case_line(backup, fd, line));
}
