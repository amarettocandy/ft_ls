/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:07:36 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:07:41 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_dlist		*ft_dlstget(t_dlist *cdlst, size_t ind)
{
	while (ind-- && cdlst->next)
		cdlst = cdlst->next;
	return (cdlst);
}
