/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:34:21 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:39:47 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

int		ft_strlen(char *s);
void	ft_putstr(char *s);
void	*ft_strnstr(const char *s1, const char *s2, size_t size);
char	**ft_split(char *s, char c);
void	error_msg(void);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim_base(char *s1, char *set);
char	*ft_strdup(char *s);
void	pipe_fork_error(char **argv, char **envp);
void	go_shell(char *path, int i, char **argv);

#endif
