/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:29:46 by slee2             #+#    #+#             */
/*   Updated: 2021/07/06 19:27:58 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define SA 1
# define SB 2
# define SS 3
# define PA 4
# define PB 5
# define RA 6
# define RB 7
# define RR 8
# define RRA 9
# define RRB 10
# define RRR 11

typedef struct s_pivot {
	int			a;
	int			a1;
	int			b;
	int			b1;
}				t_pivot;

typedef struct s_stack {
	int			a[400000];
	int			a_count;
	int			b[400000];
	int			b_count;
	int			command[400000];
	int			c_count;
	t_pivot		pivot;
}				t_stack;

int				check_argv(char **argv, t_stack *stack, int index);
void			check_same(t_stack *stack);
void			error(void);
char			**ft_split(char *s, char c);
void			ft_free_all(char **s);
void			ft_putstr(char *s);
int				ft_atoi(char *str, char **arg);
void			replace_rrr(t_stack *stack, int cmd1, int cmd2);
int				small_count_a(t_stack *stack, int count);
int				small_count_b(t_stack *stack, int count);
void			search_cmd(t_stack *stack);
void			add_cmd(t_stack *stack, int cmd);
void			move_a_b(t_stack *stack, int count);
void			move_b_a(t_stack *stack, int count);
void			check_command(t_stack *stack);
void			do_command(t_stack *stack, int i);
void			display_cmd(t_stack *stack);
void			take_b(t_stack *stack);
void			take_a(t_stack *stack);
int				remove_cmd(t_stack *stack, int i, int count);
int				change_cmd(t_stack *stack, int i, int count, int cmd);
int				find_pivot_b(t_stack *stack, int count, int rank);
int				find_pivot_a(t_stack *stack, int count, int rank);
void			arg_two(t_stack *stack);
void			arg_three(t_stack *stack);
void			arg_three_b(t_stack *stack);
void			arg_five(t_stack *stack);
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
