/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:12:47 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:12:50 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_mem.h"

char	*ft_strchr(const char *str, int ch)
{
	return ((char *)ft_memchr((char *)str, ch, (ft_strlen(str) + 1)));
}
