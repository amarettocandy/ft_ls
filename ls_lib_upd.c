/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_lib_upd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:00:00 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:00:03 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ls_strcat(char *a, const char *b)
{
	const size_t		len = ft_strlen(a);
	const size_t		len1 = ft_strlen(b);

	ft_strcpy(&(a[len]), b);
	return (a + len + len1);
}

char	*ls_strcat_lfrt(char *st, int len, char filler, char *str)
{
	char	*tst;

	if (!(tst = ls_strcat(st, str)))
		return (0);
	if ((size_t)tst < (size_t)(st + len))
		ft_memset(tst, filler, (st - tst) + len);
	st[len] = 0;
	return (st + len);
}

char	*ls_n2s_rformat(size_t a, int len, char filler, char *st)
{
	int		ind;

	if (st)
	{
		ind = len;
		ft_memset(st, filler, len);
		st[ind] = 0;
		if (!a)
			st[ind - 1] = '0';
		while (a && --ind > -1)
		{
			st[ind] = (a % 10) + 48;
			a /= 10;
		}
		st[len] = 0;
	}
	return (st + len);
}
