/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_cmd_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:31:16 by slee2             #+#    #+#             */
/*   Updated: 2021/07/05 22:13:40 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	do_command_sub(t_stack *stack, char *cmd)
{
	if (!ft_strcmp(cmd, "rr"))
		rr(stack);
	else if (!ft_strcmp(cmd, "rra"))
		rra(stack);
	else if (!ft_strcmp(cmd, "rrb"))
		rrb(stack);
	else if (!ft_strcmp(cmd, "rrr"))
		rrr(stack);
	else
	{
		free(cmd);
		error();
	}
}

void	do_command(t_stack *stack, char *cmd)
{
	if (!ft_strcmp(cmd, "sa"))
		sa(stack);
	else if (!ft_strcmp(cmd, "sb"))
		sb(stack);
	else if (!ft_strcmp(cmd, "ss"))
		ss(stack);
	else if (!ft_strcmp(cmd, "pa"))
		pa(stack);
	else if (!ft_strcmp(cmd, "pb"))
		pb(stack);
	else if (!ft_strcmp(cmd, "ra"))
		ra(stack);
	else if (!ft_strcmp(cmd, "rb"))
		rb(stack);
	else
		do_command_sub(stack, cmd);
	free(cmd);
}

int	check_alldone(t_stack *stack, int count)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < count)
	{
		tmp = i;
		while (++tmp < count)
		{
			if (stack->a[i] > stack->a[tmp])
				return (0);
		}
		i++;
	}
	return (1);
}
