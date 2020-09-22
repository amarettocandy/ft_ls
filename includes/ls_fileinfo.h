/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_fileinfo.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:04:26 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:04:28 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LS_FILEINFO_H
# define LS_FILEINFO_H

# include "ls_inc.h"

# define FINFO_XATTR 1
# define FINFO_ACL 2

typedef enum		e_filetype
{
	unknown,
	fifo,
	chardev,
	argdir,
	blockdev,
	regular,
	slink,
	socket,
	whiteout,
	directory
}					t_filetype;

typedef struct		s_fileinfo
{
	char			path[1024];
	char			filename[256];
	struct stat		s_stat;
	ssize_t			isxattr;
	int				isacl;
	t_filetype		filetype;
	int				major;
	int				minor;
}					t_fileinfo;

t_filetype			ls_get_filetype(mode_t mode);
int					ls_get_fileinfo(t_fileinfo *info, char *name, char *path);
t_dlist				*ls_get_filelist(char *path);
char				*ls_ret_base_from_path(char *path);
void				ls_it_stk(t_dlist *before, t_dlist **begin, t_dlist *inj);

#endif
