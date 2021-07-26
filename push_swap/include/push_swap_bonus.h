/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:29:46 by slee2             #+#    #+#             */
/*   Updated: 2021/07/06 19:41:18 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFFER_SIZE 1

typedef struct s_stack {
	int			a[400000];
	int			a_count;
	int			b[400000];
	int			b_count;
}				t_stack;

int				ft_atoi(char *str, char **arg);
void			do_command(t_stack *stack, char *cmd);
int				check_alldone(t_stack *stack, int count);
int				get_next_line(int fd, char **line);
char			*ft_strdup(char *s);
char			*ft_strjoin(char *s1, char *s2);
char			**ft_split(char *s, char c);
int				ft_strcmp(char *s1, char *s2);
int				check_argv(char **argv, t_stack *stack, int index);
void			check_same(t_stack *stack);
void			ft_free_all(char **s);
void			ft_putstr(char *s);
int				ft_strlen(char *s);
void			error(void);
void			error_msg(char *s);
void			sa(t_stack *stack);
void			sb(t_stack *stack);
void			ss(t_stack *stack);
void			pa(t_stack *stack);
void			pb(t_stack *stack);
void			ra(t_stack *stack);
void			rb(t_stack *stack);
void			rr(t_stack *stack);
void			rra(t_stack *stack);
void			rrb(t_stack *stack);
void			rrr(t_stack *stack);

#endif
