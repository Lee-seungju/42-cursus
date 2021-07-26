/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:29:12 by slee2             #+#    #+#             */
/*   Updated: 2021/07/07 14:16:14 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		stack;
	int			i;

	i = 1;
	if (argc == 1)
		exit(0);
	stack.a_count = 0;
	stack.b_count = 0;
	stack.c_count = 0;
	while (i < argc)
	{
		if (!check_argv(argv, &stack, i))
			error();
		i++;
	}
	check_same(&stack);
	search_cmd(&stack);
	check_command(&stack);
	display_cmd(&stack);
}
