/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ai.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:47:22 by slee2             #+#    #+#             */
/*   Updated: 2021/07/04 21:24:10 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_alldone(t_stack *stack, int count)
{
	int	i;
	int	tmp;

	i = 0;
	if (stack->b_count != 0)
		return (1);
	while (i < count)
	{
		tmp = i;
		while (++tmp < count)
		{
			if (stack->a[i] > stack->a[tmp])
				return (1);
		}
		i++;
	}
	return (0);
}

int	find_pivot_b(t_stack *stack, int count, int rank)
{
	int	i;
	int	cnt_rank;
	int	index_rank;

	index_rank = 0;
	while (index_rank < count)
	{
		i = 0;
		cnt_rank = 0;
		while (i < count)
		{
			if (stack->b[index_rank] < stack->b[i])
				cnt_rank++;
			i++;
		}
		if (cnt_rank == rank)
			return (index_rank);
		index_rank++;
	}
	return (index_rank);
}

int	find_pivot_a(t_stack *stack, int count, int rank)

{
	int	i;
	int	cnt_rank;
	int	index_rank;

	index_rank = 0;
	while (index_rank < count)
	{
		i = 0;
		cnt_rank = 0;
		while (i < count)
		{
			if (stack->a[index_rank] > stack->a[i])
				cnt_rank++;
			i++;
		}
		if (cnt_rank == rank)
			return (index_rank);
		index_rank++;
	}
	return (index_rank);
}

void	search_cmd(t_stack *stack)
{
	int	count;

	count = stack->a_count;
	while (check_alldone(stack, count))
	{
		if (count <= 5)
			arg_five(stack);
		else
			move_a_b(stack, count);
	}
}
