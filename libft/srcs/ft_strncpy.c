/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:14:43 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:14:45 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_mem.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		src_len;

	src_len = ft_strlen(src);
	if (len)
	{
		if (src_len < len)
		{
			ft_memcpy(dst, src, src_len);
			ft_bzero(dst + src_len, len - src_len);
		}
		else
		{
			ft_memcpy(dst, src, len);
		}
	}
	return (dst);
}
