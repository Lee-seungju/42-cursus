/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_r_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:54:51 by slee2             #+#    #+#             */
/*   Updated: 2021/07/05 20:03:14 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra(t_stack *stack)
{
	int	i;
	int	first;

	if (stack->a_count >= 2)
	{
		first = stack->a[0];
		i = 0;
		while (++i < stack->a_count)
			stack->a[i - 1] = stack->a[i];
		stack->a[stack->a_count - 1] = first;
	}
}

void	rb(t_stack *stack)
{
	int	i;
	int	first;

	if (stack->b_count >= 2)
	{
		first = stack->b[0];
		i = 0;
		while (++i < stack->b_count)
			stack->b[i - 1] = stack->b[i];
		stack->b[stack->b_count - 1] = first;
	}
}

void	rr(t_stack *stack)
{
	ra(stack);
	rb(stack);
}
