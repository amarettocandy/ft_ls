/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstshift.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:08:31 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:08:34 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_dlist		*ft_dlstshift(t_dlist **list)
{
	t_dlist		*lst;

	if (!list || !(*list))
		return (0);
	if ((lst = *list)->next)
		lst->next->prev = 0;
	*list = lst->next;
	return (lst);
}
