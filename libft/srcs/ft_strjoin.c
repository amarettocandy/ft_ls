/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:13:57 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:14:03 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"
#include "ft_mem.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			s1_len;
	size_t			s2_len;
	size_t			summ_len;
	char			*concat;

	if (s1 && s2)
	{
		s1_len = ft_strlen(s1);
		s2_len = ft_strlen(s2);
		if ((summ_len = s1_len + s2_len) + 1 == 0)
			return (0);
		concat = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
		if (concat)
		{
			ft_memcpy(concat, s1, s1_len);
			ft_memcpy(concat + s1_len, s2, s2_len);
			concat[s1_len + s2_len] = 0;
			return (concat);
		}
	}
	return (0);
}
