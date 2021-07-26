/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:06:45 by slee2             #+#    #+#             */
/*   Updated: 2021/07/05 16:27:11 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	remove_cmd(t_stack *stack, int i, int count)
{
	int	index;

	i--;
	while (i++ < stack->c_count - count)
		stack->command[i] = stack->command[i + count];
	index = 0;
	while (index++ < count)
		stack->command[stack->c_count - index] = 0;
	stack->c_count -= count;
	return (-1);
}

int	change_cmd(t_stack *stack, int i, int count, int cmd)
{
	int	index;

	stack->command[i] = cmd;
	while (i++ < stack->c_count - count)
		stack->command[i] = stack->command[i + count];
	index = 0;
	while (index++ < count)
		stack->command[stack->c_count - index] = 0;
	stack->c_count -= count;
	return (-1);
}
/*
int	change_three(t_stack *stack, int i, int cmd1, int cmd2)
{
	change_cmd(stack, i, 1, cmd1);
	stack->command[i + 2] = cmd2;
	return (-1);
}
*/
/*
int	case_rrr(t_stack *stack, int i)
{
	if (stack->command[i + 1] == PA && stack->command[i + 2] == SB)
	{
		if (stack->command[i - 1] == PB)
		{
			stack->command[i - 1] = SB;
			stack->command[i] = RRR;
			stack->command[i + 1] = SA;
			return (remove_cmd(stack, i + 2, 2));
		}
	}
	return (i);
}
*/
