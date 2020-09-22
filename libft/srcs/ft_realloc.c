/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:12:34 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:12:37 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"
#include <stdlib.h>

static void	*zero_size__(void *ptr)
{
	ft_memdel(&ptr);
	return (ptr);
}

void		*ft_realloc(void *ptr, size_t size)
{
	void	*tmp;

	if (size == 0)
		return (zero_size__(ptr));
	if (ptr == (void *)0)
		return (malloc(size));
	if ((tmp = malloc(size)) != (void *)0)
	{
		ft_memcpy(tmp, ptr, size);
		ft_memdel(&ptr);
		return (tmp);
	}
	else
		return ((void *)0);
}
