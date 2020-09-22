/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:15:41 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:15:43 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (s)
	{
		if ((j = ft_strlen(s)))
		{
			j--;
			while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && i <= j)
				i++;
			while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && i <= j)
				j--;
		}
		return (ft_strsub(s, i, j - i + 1));
	}
	return (0);
}
