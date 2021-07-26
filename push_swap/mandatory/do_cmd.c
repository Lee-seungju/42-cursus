/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_cmd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:31:16 by slee2             #+#    #+#             */
/*   Updated: 2021/07/02 17:51:41 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_command_sub(t_stack *stack, int i)
{
	if (stack->command[i] == RR)
		rr(stack);
	else if (stack->command[i] == RRA)
		rra(stack);
	else if (stack->command[i] == RRB)
		rrb(stack);
	else if (stack->command[i] == RRR)
		rrr(stack);
}

void	do_command(t_stack *stack, int i)
{
	if (stack->command[i] == SA)
		sa(stack);
	else if (stack->command[i] == SB)
		sb(stack);
	else if (stack->command[i] == SS)
		ss(stack);
	else if (stack->command[i] == PA)
		pa(stack);
	else if (stack->command[i] == PB)
		pb(stack);
	else if (stack->command[i] == RA)
		ra(stack);
	else if (stack->command[i] == RB)
		rb(stack);
	else
		do_command_sub(stack, i);
}

void	add_cmd(t_stack *stack, int cmd)
{
	stack->command[stack->c_count] = cmd;
	stack->c_count++;
	do_command(stack, stack->c_count - 1);
}
