/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:15:00 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:15:03 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t		ft_strnlen(const char *s, size_t maxlen)
{
	size_t		i;

	i = 0;
	if (s)
		i = ft_strlen(s);
	i > maxlen ? (i = maxlen) : i;
	return (i);
}
