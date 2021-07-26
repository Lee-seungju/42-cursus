/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_case_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 04:36:00 by slee2             #+#    #+#             */
/*   Updated: 2021/07/05 17:12:38 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_r_case(t_stack *stack)
{
	int	i;
	int	place;

	i = 1;
	place = 0;
	while (i < stack->a_count)
	{
		if (stack->a[i] < stack->a[place])
			place = i;
		i++;
	}
	if (place <= stack->a_count / 2)
		add_cmd(stack, RA);
	else
		add_cmd(stack, RRA);
}

void	b_r_case(t_stack *stack)
{
	int	i;
	int	place;

	i = 1;
	place = 0;
	while (i < stack->b_count)
	{
		if (stack->b[i] < stack->b[place])
			place = i;
		i++;
	}
	if (place <= stack->b_count / 2)
		add_cmd(stack, RB);
	else
		add_cmd(stack, RRB);
}

void	choice(t_stack *stack, char c)
{
	if (c == 'a')
	{
		if (stack->b_count >= 1 && stack->a[stack->a_count - 1] < stack->b[0])
			add_cmd(stack, PA);
		if (stack->a[0] < stack->a[1])
			a_r_case(stack);
		else if (stack->a[1] < stack->a[stack->a_count - 1])
			a_r_case(stack);
		else
			add_cmd(stack, SA);
	}
	else if (c == 'b')
	{
		if (stack->a_count >= 1 && stack->b[stack->b_count - 1] > stack->a[0])
			add_cmd(stack, PB);
		if (stack->b[0] > stack->b[1])
			b_r_case(stack);
		else if (stack->b[1] > stack->b[stack->b_count - 1])
			b_r_case(stack);
		else
			add_cmd(stack, SB);
	}
}

void	take_a(t_stack *stack)
{
	if (stack->a_count >= 2 && stack->a[0] > stack->a[stack->a_count - 1])
		choice(stack, 'a');
	else if (stack->a_count >= 2 && stack->a[0] > stack->a[1])
		add_cmd(stack, SA);
	else
	{
		add_cmd(stack, PB);
		if (stack->b_count >= 2 && stack->b[0] < stack->b[stack->b_count - 1])
			choice(stack, 'b');
		else if (stack->b_count >= 2 && stack->b[0] < stack->b[1])
			add_cmd(stack, SB);
	}
}

void	take_b(t_stack *stack)
{
	if (stack->b_count >= 2 && stack->b[0] < stack->b[stack->b_count - 1])
		choice(stack, 'b');
	else if (stack->b_count >= 2 && stack->b[0] < stack->b[1])
		add_cmd(stack, SB);
	else
	{
		add_cmd(stack, PA);
		if (stack->a_count >= 2 && stack->a[0] > stack->a[stack->a_count - 1])
			choice(stack, 'a');
		else if (stack->a_count >= 2 && stack->a[0] > stack->a[1])
			add_cmd(stack, SA);
	}
}
