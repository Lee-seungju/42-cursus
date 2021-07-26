/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ai_sub1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:16:47 by slee2             #+#    #+#             */
/*   Updated: 2021/07/05 17:36:55 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	replace_rrr(t_stack *stack, int cmd1, int cmd2)
{
	int	i;

	i = 0;
	while (i < cmd1 && i < cmd2)
	{
		add_cmd(stack, RRR);
		i++;
	}
	while (i++ < cmd1)
		add_cmd(stack, RRA);
	i--;
	while (i++ < cmd2)
		add_cmd(stack, RRB);
}

int	small_count_b(t_stack *stack, int count)
{
	if (count == 0)
		return (0);
	else if (count == 1)
		add_cmd(stack, PA);
	else if (count == 2)
	{
		if (stack->b[0] < stack->b[1])
			add_cmd(stack, SB);
		add_cmd(stack, PA);
		add_cmd(stack, PA);
	}
	else if (count == 3)
		arg_three_b(stack);
	else
		return (1);
	return (0);
}

int	small_count_a(t_stack *stack, int count)
{
	if (count == 0)
		return (0);
	else if (count == 1)
		return (0);
	else if (count == 2)
		arg_two(stack);
	else if (count == 3)
		arg_three(stack);
	else
		return (1);
	return (0);
}
