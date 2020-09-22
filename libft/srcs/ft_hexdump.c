/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:08:58 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:09:01 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	ft_hexdump(void *ptr, size_t size)
{
	unsigned char	*byte;
	int				fd;

	fd = 1;
	byte = (unsigned char *)ptr;
	while (size--)
	{
		if (*byte < 16)
			ft_putchar_fd('0', fd);
		ft_putll_base_fd(*byte, fd, 16);
		ft_putchar_fd(' ', fd);
		byte++;
	}
}
