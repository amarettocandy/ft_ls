/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstrget.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:08:17 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:08:19 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_dlist		*ft_dlstrget(t_dlist *cdlst, size_t ind)
{
	while (ind-- && cdlst)
		cdlst = cdlst->prev;
	return (cdlst);
}
