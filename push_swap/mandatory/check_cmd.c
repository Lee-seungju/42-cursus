/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cmd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:46:50 by slee2             #+#    #+#             */
/*   Updated: 2021/07/05 17:10:41 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	same_cmd(t_stack *stack, int i)
{
	if (stack->command[i] == SA && stack->command[i + 1] == SA)
		return (0);
	if (stack->command[i] == SB && stack->command[i + 1] == SB)
		return (0);
	if (stack->command[i] == RA && stack->command[i + 1] == RRA)
		return (0);
	if (stack->command[i] == RRA && stack->command[i + 1] == RA)
		return (0);
	if (stack->command[i] == RB && stack->command[i + 1] == RRB)
		return (0);
	if (stack->command[i] == RRB && stack->command[i + 1] == RB)
		return (0);
	if (stack->command[i] == PB && stack->command[i + 1] == PA)
		return (0);
	if (stack->command[i] == PA && stack->command[i + 1] == PB)
		return (0);
	if (stack->command[i] == SS && stack->command[i + 1] == SS)
		return (0);
	if (stack->command[i] == RR && stack->command[i + 1] == RRR)
		return (0);
	if (stack->command[i] == RRR && stack->command[i + 1] == RR)
		return (0);
	return (1);
}

int	two_to_one(t_stack *stack, int i)
{
	if (stack->command[i] == SA && stack->command[i + 1] == SB)
		return (SS);
	if (stack->command[i] == SB && stack->command[i + 1] == SA)
		return (SS);
	if (stack->command[i] == RA && stack->command[i + 1] == RB)
		return (RR);
	if (stack->command[i] == RB && stack->command[i + 1] == RA)
		return (RR);
	if (stack->command[i] == RRA && stack->command[i + 1] == RRB)
		return (RRR);
	if (stack->command[i] == RRB && stack->command[i + 1] == RRA)
		return (RRR);
	return (0);
}

int	remove_command(t_stack *stack, int i)
{
	int	cmd;

	if (!(same_cmd(stack, i)))
		return (remove_cmd(stack, i, 2));
	cmd = two_to_one(stack, i);
	if (cmd != 0)
		return (change_cmd(stack, i, 1, cmd));
	return (i);
}

void	check_command(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->c_count)
	{
		i = remove_command(stack, i);
		i++;
	}
}
