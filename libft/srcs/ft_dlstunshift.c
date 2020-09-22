/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstunshift.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:08:49 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:08:54 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

void	ft_dlstunshift(t_dlist **dlst, t_dlist *nlst)
{
	if (!nlst || !dlst)
		return ;
	nlst->next = *dlst;
	if (*dlst)
		(*dlst)->prev = nlst;
	*dlst = nlst;
}
