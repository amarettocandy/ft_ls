/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_error.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:04:19 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:04:22 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LS_ERROR_H
# define LS_ERROR_H

# include "ls_inc.h"

# define STDERR_FD STDERR_FILENO

void		ls_errno_exit(void);
void		ls_puterror_exit(const char *strerr);
void		ls_perrno_exit(char const *strerr);
void		ls_errno(const char *strerr);

#endif
