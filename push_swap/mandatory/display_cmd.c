/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:42:04 by slee2             #+#    #+#             */
/*   Updated: 2021/07/01 14:39:32 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display_cmd_sub(t_stack *stack, int i)
{
	if (stack->command[i] == RR)
		ft_putstr("rr\n");
	else if (stack->command[i] == RRA)
		ft_putstr("rra\n");
	else if (stack->command[i] == RRB)
		ft_putstr("rrb\n");
	else if (stack->command[i] == RRR)
		ft_putstr("rrr\n");
}

void	display_cmd(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->c_count)
	{
		if (stack->command[i] == SA)
			ft_putstr("sa\n");
		else if (stack->command[i] == SB)
			ft_putstr("sb\n");
		else if (stack->command[i] == SS)
			ft_putstr("ss\n");
		else if (stack->command[i] == PA)
			ft_putstr("pa\n");
		else if (stack->command[i] == PB)
			ft_putstr("pb\n");
		else if (stack->command[i] == RA)
			ft_putstr("ra\n");
		else if (stack->command[i] == RB)
			ft_putstr("rb\n");
		else
			display_cmd_sub(stack, i);
		i++;
	}
}	
