/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:14:55 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:14:57 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size == ((size_t)0) - 1)
		return (0);
	str = (char *)ft_memalloc(size + 1);
	return (str);
}
