/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:12:50 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:31:00 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_num(int i, int fd)
{
	int	j;
	int	a;

	if (i >= 10)
	{
		j = i / 10;
		a = i % 10 + '0';
		ft_num(j, fd);
		write(fd, &a, 1);
	}
	if (i < 10)
	{
		i = i + '0';
		write(fd, &i, 1);
		return ;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		write(fd, "0", 1);
	else if (n == -2147483648)
	{
		write(fd, "-2", 2);
		ft_num(147483648, fd);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_num(n * (-1), fd);
	}
	else if (n > 0)
		ft_num(n, fd);
}
