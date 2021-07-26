/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:01:38 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:30:51 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_usdel(t_list *b, void (*del)(void *))
{
	del(b->content);
	free(b);
	return (0);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*b;
	t_list	*a;

	if (lst == 0 || f == 0)
		return (0);
	b = ft_lstnew(lst->content);
	if (!b)
		return (ft_usdel(b, del));
	b->content = f(lst->content);
	a = b;
	while (lst->next)
	{
		lst = lst->next;
		b->next = ft_lstnew(lst->content);
		if (!(b->next))
			return (ft_usdel(b, del));
		b = b->next;
		b->content = f(lst->content);
	}
	return (a);
}
