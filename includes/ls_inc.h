/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_inc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:04:43 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:04:46 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LS_INC_H
# define LS_INC_H

# include <unistd.h>
# include <sys/stat.h>
# include <dirent.h>
# include <sys/types.h>
# include <pwd.h>
# include <grp.h>
# include <time.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/xattr.h>
# include <sys/acl.h>
# include <uuid/uuid.h>
# include <errno.h>
# include <sys/ioctl.h>

# include "libft.h"
# include "ls_flags.h"
# include "ls_input.h"
# include "ls_error.h"
# include "ls_sort.h"
# include "ls_fileinfo.h"
# include "ls_format.h"

t_flags				g_flags;
t_dlist				*g_args;
t_dlist				*g_files;
int					g_mf;
struct winsize		term;

#endif
