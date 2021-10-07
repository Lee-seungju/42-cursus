/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 12:45:15 by jimikim           #+#    #+#             */
/*   Updated: 2021/09/23 23:34:20 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_word_count(char *str, char c);
int		ft_strlen(const char *s);
int		ft_strcmp(char *s1, char *s2);
char	**ft_split(char const *s, char c);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strdup(char *s1);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strchr(const char *s, int c);
int		ft_atoi(char *str);
int		ft_array_count(char **target);

#endif
