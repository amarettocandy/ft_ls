/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:11:07 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:11:10 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"
#include <stdlib.h>

void	*ft_memdup(void *start, size_t len)
{
	void	*newmem;

	if (!len)
		return (0);
	if ((newmem = malloc(len)))
		ft_memcpy(newmem, start, len);
	return (newmem);
}
