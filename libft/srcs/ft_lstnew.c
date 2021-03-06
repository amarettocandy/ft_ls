/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:10:22 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:10:25 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_mem.h"
#include <stdlib.h>

inline static t_list	*abort_creation(t_list **lst)
{
	ft_memdel((void **)lst);
	return (0);
}

inline static t_list	*null_content(t_list **lst)
{
	(*lst)->content = 0;
	(*lst)->content_size = 0;
	(*lst)->next = 0;
	return (*lst);
}

t_list					*ft_lstnew(void const *content, size_t size)
{
	t_list		*list;

	if ((list = (t_list *)malloc(sizeof(t_list))))
	{
		if (!content)
			list = null_content(&list);
		else if (!(list->content = ft_memalloc(size ? size : 1)))
			return (abort_creation(&list));
		else
		{
			ft_memcpy(list->content, content, size);
			list->content_size = size;
			list->next = 0;
		}
	}
	return (list);
}
