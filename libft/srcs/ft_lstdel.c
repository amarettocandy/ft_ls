/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:09:57 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:10:00 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*del_goal;
	t_list		*iter;

	if (alst && *alst && del)
	{
		iter = *alst;
		while (iter)
		{
			del_goal = iter;
			iter = iter->next;
			ft_lstdelone(&del_goal, del);
		}
		*alst = 0;
	}
}
