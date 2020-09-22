/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstinsert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:07:52 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:07:56 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

void		ft_dlstinsert(t_dlist *insrt, t_dlist *prv, t_dlist *nxt)
{
	if (prv)
	{
		insrt->prev = prv;
		prv->next = insrt;
	}
	if (nxt)
	{
		insrt->next = nxt;
		nxt->prev = insrt;
	}
}
