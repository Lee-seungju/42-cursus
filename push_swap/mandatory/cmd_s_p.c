/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_s_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:25:03 by slee2             #+#    #+#             */
/*   Updated: 2021/07/01 13:30:32 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	i;

	if (stack->a_count >= 2)
	{
		i = stack->a[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = i;
	}
}

void	sb(t_stack *stack)
{
	int	i;

	if (stack->b_count >= 2)
	{
		i = stack->b[0];
		stack->b[0] = stack->b[1];
		stack->b[1] = i;
	}
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
}

void	pa(t_stack *stack)
{
	int	i;

	if (stack->b_count > 0)
	{
		stack->a_count++;
		i = stack->a_count;
		while (i-- > 0)
			stack->a[i + 1] = stack->a[i];
		stack->a[0] = stack->b[0];
		stack->b_count--;
		i = 0;
		while (i++ < stack->b_count)
			stack->b[i - 1] = stack->b[i];
		stack->b[i - 1] = 0;
	}
}

void	pb(t_stack *stack)
{
	int	i;

	if (stack->a_count > 0)
	{
		stack->b_count++;
		i = stack->b_count;
		while (i-- > 0)
			stack->b[i + 1] = stack->b[i];
		stack->b[0] = stack->a[0];
		stack->a_count--;
		i = 0;
		while (i++ < stack->a_count)
			stack->a[i - 1] = stack->a[i];
		stack->a[i - 1] = 0;
	}
}
