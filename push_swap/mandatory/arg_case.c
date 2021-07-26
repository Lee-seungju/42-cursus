/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_case.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 03:00:07 by slee2             #+#    #+#             */
/*   Updated: 2021/07/04 22:24:34 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arg_two(t_stack *stack)
{
	if (stack->a[0] > stack->a[1])
		add_cmd(stack, SA);
}

void	arg_three_b(t_stack *stack)
{
	if (stack->b[0] < stack->b[1])
		add_cmd(stack, SB);
	if (stack->b[2] > stack->b[1])
	{
		add_cmd(stack, RB);
		add_cmd(stack, SB);
		add_cmd(stack, RRB);
		if (stack->b[0] < stack->b[1])
			add_cmd(stack, SB);
	}
	add_cmd(stack, PA);
	add_cmd(stack, PA);
	add_cmd(stack, PA);
}

void	arg_three(t_stack *stack)
{
	arg_two(stack);
	if (stack->a[2] < stack->a[1])
	{
		add_cmd(stack, RA);
		add_cmd(stack, SA);
		add_cmd(stack, RRA);
		if (stack->a[0] > stack->a[1])
			add_cmd(stack, SA);
	}
}

void	arg_five(t_stack *stack)
{
	while (stack->a_count)
		take_a(stack);
	while (stack->b_count)
		take_b(stack);
}
