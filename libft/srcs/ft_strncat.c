/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:14:31 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:14:34 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"
#include "ft_string.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strnlen(s2, n);
	if (s2_len < n)
		n = s2_len + 1;
	ft_memcpy(&(s1[s1_len]), s2, n);
	s1[s1_len + s2_len] = 0;
	return (s1);
}
