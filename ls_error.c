/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 23:59:09 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/23 23:59:13 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ls_inc.h"

void	ls_errno_exit(void)
{
	const char *errtext = strerror(errno);

	ft_putstr_fd("ft_ls: ", STDERR_FD);
	ft_putendl_fd(errtext, STDERR_FD);
	exit(errno);
}

void	ls_perrno_exit(char const *strerr)
{
	const char *errtext = strerror(errno);

	ft_putstr_fd(strerr, STDERR_FD);
	ft_putstr_fd(" :", STDERR_FD);
	ft_putendl_fd(errtext, STDERR_FD);
	exit(errno);
}

void	ls_puterror_exit(const char *strer)
{
	ft_putstr_fd("ft_ls: ", STDERR_FD);
	ft_putendl_fd(strer, STDERR_FD);
	exit(-1);
}

void	ls_errno(const char *strer)
{
	const char *errtext = strerror(errno);

	ft_putstr_fd("ft_ls: ", STDERR_FD);
	ft_putstr_fd(strer, STDERR_FD);
	ft_putstr_fd(": ", STDERR_FD);
	ft_putendl_fd(errtext, STDERR_FD);
}
