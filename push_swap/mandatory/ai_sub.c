/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ai_sub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:17:11 by slee2             #+#    #+#             */
/*   Updated: 2021/07/05 17:36:46 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	divide_stack_b(t_stack *stack, int *cmd)
{
	if (stack->b[0] < stack->pivot.b1)
	{
		add_cmd(stack, RB);
		cmd[0]++;
	}
	else
	{
		add_cmd(stack, PA);
		cmd[1]++;
		if (stack->a[0] < stack->pivot.b)
		{
			add_cmd(stack, RA);
			cmd[2]++;
		}
	}
}

void	divide_stack_a(t_stack *stack, int *cmd)
{
	if (stack->a[0] >= stack->pivot.a1)
	{
		add_cmd(stack, RA);
		cmd[0]++;
	}
	else
	{
		add_cmd(stack, PB);
		cmd[1]++;
		if (stack->b[0] >= stack->pivot.a)
		{
			add_cmd(stack, RB);
			cmd[2]++;
		}
	}
}

void	move_b_a(t_stack *stack, int count)
{
	int	cmd[3];

	cmd[0] = 0;
	cmd[1] = 0;
	cmd[2] = 0;
	if (!(small_count_b(stack, count)))
		return ;
	stack->pivot.b = stack->b[find_pivot_b(stack, count, count / 3)];
	stack->pivot.b1 = stack->b[find_pivot_b(stack, count, (count * 2) / 3)];
	while (--count >= 0)
		divide_stack_b(stack, cmd);
	move_a_b(stack, cmd[1] - cmd[2]);
	replace_rrr(stack, cmd[2], cmd[0]);
	move_a_b(stack, cmd[2]);
	move_b_a(stack, cmd[0]);
}

void	move_a_b(t_stack *stack, int count)
{
	int	cmd[3];

	cmd[0] = 0;
	cmd[1] = 0;
	cmd[2] = 0;
	if (!(small_count_a(stack, count)))
		return ;
	stack->pivot.a = stack->a[find_pivot_a(stack, count, count / 3)];
	stack->pivot.a1 = stack->a[find_pivot_a(stack, count, (count * 2) / 3)];
	while (--count >= 0)
		divide_stack_a(stack, cmd);
	replace_rrr(stack, cmd[0], cmd[2]);
	move_a_b(stack, cmd[0]);
	move_b_a(stack, cmd[2]);
	move_b_a(stack, cmd[1] - cmd[2]);
}
