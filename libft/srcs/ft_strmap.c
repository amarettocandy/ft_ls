/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:14:19 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:14:22 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t			size;
	unsigned int	i;
	char			*map;

	map = 0;
	if (s)
	{
		size = ft_strlen(s);
		map = (char *)malloc(sizeof(char) * (size + 1));
		if (f && map)
		{
			i = 0;
			while (i < size)
			{
				map[i] = (*f)(s[i]);
				i++;
			}
			map[i] = 0;
		}
	}
	return (map);
}
