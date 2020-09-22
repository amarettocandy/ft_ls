/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:10:34 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:10:37 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void	*ptr;
	size_t	len;

	if ((ptr = ft_memchr(src, c, n)))
	{
		len = ptr - src + 1;
		ft_memcpy(dst, src, len);
		return (dst + len);
	}
	ft_memcpy(dst, src, n);
	return (0);
}
