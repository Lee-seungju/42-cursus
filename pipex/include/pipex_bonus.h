/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 21:39:27 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:39:45 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# define BUFFER_SIZE 1

int		ft_strlen(char *s);
void	ft_putstr(char *s);
void	*ft_strnstr(const char *s1, const char *s2, size_t size);
char	**ft_split(char *s, char c);
void	error_msg(void);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strtrim_base(char *s1, char *set);
char	*ft_strdup(char *s);
void	go_shell(char *path, int i, char **argv);
void	pipe_fork_error(int argc, char **argv, char **envp);
void	pipe_fork(char *path, int argc, int i, char **argv);
int		get_next_line(int fd, char **line);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s);
void	heredoc(char *eof, int argc, char **argv, char **envp);
void	makefd(int argc, char **argv, char **envp);
int		ft_strcmp(char *s1, char *s2);
void	clear_temp(void);

#endif
