/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:11:14 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:11:17 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*buff;

	buff = (unsigned char *)malloc(sizeof(unsigned char) * n);
	if (buff)
	{
		ft_memcpy(buff, src, n);
		ft_memcpy(dst, buff, n);
	}
	return (dst);
}
