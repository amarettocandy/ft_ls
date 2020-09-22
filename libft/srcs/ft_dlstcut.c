/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstcut.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:06:16 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:06:18 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_dlist		*ft_dlstcut(t_dlist **cutdlst)
{
	const t_dlist		*clst = (*cutdlst);
	t_dlist				*prev;
	t_dlist				*next;

	prev = clst->prev;
	next = clst->next;
	if (!cutdlst || !(*cutdlst))
		return (0);
	if (!prev && !next)
	{
		*cutdlst = (t_dlist *)0;
		return ((t_dlist *)clst);
	}
	if (prev)
		prev->next = next;
	else
	{
		(*cutdlst) = next;
		(*cutdlst)->prev = 0;
	}
	if (next)
		next->prev = prev;
	return ((t_dlist *)clst);
}
