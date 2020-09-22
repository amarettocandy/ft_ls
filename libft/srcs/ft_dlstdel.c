/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:06:22 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:06:25 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"
#include <stdlib.h>

void	ft_dlstdel(t_dlist **dlst, size_t n)
{
	t_dlist		*tmp;

	if (!dlst || !(*dlst))
		return ;
	while ((tmp = *dlst) && n--)
	{
		if (tmp->content && tmp->size)
			free(tmp->content);
		(*dlst) = (*dlst)->next;
		if (*dlst)
			(*dlst)->prev = 0;
		free(tmp);
	}
}
