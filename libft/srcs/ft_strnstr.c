/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:15:06 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:15:11 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*hs = haystack;
	size_t		nd_len;

	nd_len = ft_strlen(needle);
	if (nd_len == 0)
		return ((char *)hs);
	while (len && *hs)
	{
		if (len >= nd_len)
			if (!(ft_strncmp(hs, needle, nd_len)))
				return ((char *)hs);
		hs++;
		len--;
	}
	return (0);
}
