/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:10:03 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:10:05 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst)
		if (*alst && del)
		{
			(*del)((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = 0;
		}
}
