/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:10:28 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:10:31 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*mem;

	if (!size)
		return (0);
	mem = (unsigned char *)malloc(size);
	if (mem)
	{
		ft_bzero(mem, size);
		return ((void *)mem);
	}
	else
		return (0);
}
