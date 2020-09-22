/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:15:15 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:15:17 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t		str_len;
	char		*finder;
	char		chr;

	str_len = ft_strlen(str);
	finder = (char *)(str + str_len);
	str_len += 1;
	chr = (char)ch;
	while (str_len--)
	{
		if (*finder == chr)
			return (finder);
		finder--;
	}
	return (0);
}
