/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:38:51 by slee2             #+#    #+#             */
/*   Updated: 2021/07/14 23:16:39 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	atoi_argv(char **arg, t_stack *stack)
{
	int		i;
	int		count;

	i = -1;
	count = 0;
	while (arg[++i])
	{
		stack->a[stack->a_count + i] = ft_atoi(arg[i], arg);
		count++;
	}
	stack->a_count += count;
	ft_free_all(arg);
	return (1);
}

void	check_same(t_stack *stack)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < stack->a_count)
	{
		tmp = i;
		while (--tmp >= 0 && stack->a[tmp])
		{
			if (stack->a[tmp] == stack->a[i])
				error();
		}
		i++;
	}
}

int	check_argv(char **argv, t_stack *stack, int index)
{
	int		i;
	int		j;
	char	**arg;

	i = 0;
	arg = ft_split(argv[index], ' ');
	if (!arg || arg[0] == 0)
		error();
	while (arg[i])
	{
		j = 0;
		if (arg[i][j] == '-' || arg[i][j] == '+')
			j++;
		while (arg[i][j])
		{
			if (arg[i][j] < '0' || arg[i][j] > '9')
			{
				ft_free_all(arg);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (atoi_argv(arg, stack));
}

long	check_max(long n, char **arg, int m)
{
	long	i;

	i = n * m;
	if (i < -2147483648 || i > 2147483647)
	{
		ft_free_all(arg);
		error();
	}
	return (n);
}

int	ft_atoi(char *str, char **arg)
{
	long	k;
	int		m;
	int		count;

	k = 0;
	m = 1;
	count = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			m = -1 * m;
		str++;
		count++;
	}
	while (*str >= '0' && *str <= '9')
	{
		k = check_max(k * 10 + *str - '0', arg, m);
		str++;
	}
	if (*str != '\0' || count >= 2)
		m = 0;
	return (m * (int)k);
}
