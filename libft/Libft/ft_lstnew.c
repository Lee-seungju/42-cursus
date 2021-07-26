/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:57:42 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:30:52 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*a;
	int		i;

	a = malloc(sizeof(t_list));
	if (!a)
		return (0);
	i = 0;
	if (content == 0)
		a->content = 0;
	else
		a->content = content;
	a->next = 0;
	return (a);
}
