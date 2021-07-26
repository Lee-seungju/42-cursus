/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:58:27 by slee2             #+#    #+#             */
/*   Updated: 2021/07/06 17:15:58 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int argc, char **argv)
{
	char	*buf;
	int		count;
	t_stack	stack;
	int		i;

	i = 1;
	if (argc == 1)
		exit(0);
	while (i < argc)
	{
		if (!check_argv(argv, &stack, i))
			error();
		i++;
	}
	check_same(&stack);
	count = stack.a_count;
	stack.b_count = 0;
	buf = NULL;
	while (get_next_line(0, &buf) > 0)
		do_command(&stack, buf);
	if (!(check_alldone(&stack, count)))
		error_msg("KO\n");
	error_msg("OK\n");
}
