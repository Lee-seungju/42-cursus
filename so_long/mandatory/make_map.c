/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 13:19:51 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:41:06 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_x(char *buff, int y, char **map)
{
	int		xlen;
	int		j;
	int		i;

	xlen = 0;
	j = 0;
	while (buff[xlen] != '\n')
		xlen++;
	while (j < y)
	{
		i = 0;
		while (buff[j * (xlen + 1) + i] != '\n')
			i++;
		if (i != xlen)
		{
			free(map);
			error();
		}
		j++;
	}
	return (xlen);
}

int	find_y(char *buff)
{
	int		i;
	int		y;

	i = 0;
	y = 0;
	while (buff[i] != '\0')
	{
		if (buff[i] == '\n')
			y++;
		i++;
	}
	return (y);
}

void	check_text(char *buff)
{
	int	i;

	i = 0;
	if (ft_strchr(buff, 'C') == 0)
		error();
	else if (ft_strchr(buff, 'E') == 0 || count_str(buff, 'E') != 1)
		error();
	else if (ft_strchr(buff, 'P') == 0 || count_str(buff, 'P') != 1)
		error();
	while (buff[i])
	{
		if (ft_strchr("01ECP\n", buff[i]) == 0)
			error();
		i++;
	}
}

char	**make_map(char *buff)
{
	int		i;
	int		y;
	int		x;
	char	**map;

	check_text(buff);
	y = find_y(buff);
	map = (char **)malloc(sizeof(char *) * (y + 1));
	if (!map)
		error();
	i = 0;
	x = check_x(buff, y, map);
	while (i < y)
	{
		buff[(x + 1) - 1] = '\0';
		map[i] = ft_strdup(buff);
		if (!map[i])
			malloc_error(i, map);
		buff[(x + 1) - 1] = '\n';
		buff += x + 1;
		i++;
	}
	map[i] = "\0";
	return (map);
}
