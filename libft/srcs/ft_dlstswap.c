/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:08:39 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:08:42 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

void		ft_dlstswap(t_dlist *a, t_dlist *b)
{
	void		*tmpc;
	size_t		tmps;

	if (!a || !b)
		return ;
	tmpc = a->content;
	tmps = a->size;
	a->content = b->content;
	a->size = b->size;
	b->content = tmpc;
	b->size = tmps;
}
