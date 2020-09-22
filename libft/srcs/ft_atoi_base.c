/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:05:32 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:05:34 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int		ft_atoi_base(const char *str, int base)
{
	long long		over;
	int				cast;

	over = ft_atoll_base(str, base);
	cast = (int)over;
	return (cast);
}
