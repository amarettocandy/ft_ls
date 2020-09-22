/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:12:22 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:12:25 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_string.h"

void	ft_putstr_fd(char const *s, int fd)
{
	size_t		mem;

	if (s)
	{
		mem = ft_strlen(s);
		write(fd, s, mem);
	}
}
