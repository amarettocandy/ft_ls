/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:10:09 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:10:12 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list		*next_lst;

	if (lst && f)
	{
		next_lst = lst;
		while (next_lst)
		{
			(*f)(next_lst);
			next_lst = next_lst->next;
		}
	}
}
