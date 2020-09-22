/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:08:09 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:08:12 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

void	ft_dlstpush(t_dlist **dlst, t_dlist *nlst)
{
	t_dlist		*it;

	if (!dlst || !nlst)
		return ;
	if (!(it = *dlst))
	{
		*dlst = nlst;
		return ;
	}
	while (it->next)
		it = it->next;
	it->next = nlst;
	nlst->prev = it;
}
