/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:03:40 by slee2             #+#    #+#             */
/*   Updated: 2021/07/01 13:30:44 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	int	i;
	int	last;

	if (stack->a_count >= 2)
	{
		last = stack->a[stack->a_count - 1];
		i = stack->a_count;
		while (--i > 0)
			stack->a[i] = stack->a[i - 1];
		stack->a[0] = last;
	}
}

void	rrb(t_stack *stack)
{
	int	i;
	int	last;

	if (stack->b_count >= 2)
	{
		last = stack->b[stack->b_count - 1];
		i = stack->b_count;
		while (--i > 0)
			stack->b[i] = stack->b[i - 1];
		stack->b[0] = last;
	}
}

void	rrr(t_stack *stack)
{
	rra(stack);
	rrb(stack);
}
