/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_getfi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 23:59:39 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/23 23:59:42 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ls_inc.h"

char			*ls_ret_base_from_path(char *path)
{
	char		*base;

	base = ft_strrchr(path, '/');
	if (!base)
		return (path);
	return (base + 1);
}

t_filetype		ls_get_filetype(mode_t mode)
{
	mode &= S_IFMT;
	if (mode == S_IFIFO)
		return (fifo);
	if (mode == S_IFCHR)
		return (chardev);
	if (mode == S_IFDIR)
	{
		if (g_flags.general_flags == DIR_ASFI)
			return (argdir);
		else
			return (directory);
	}
	if (mode == S_IFBLK)
		return (blockdev);
	if (mode == S_IFREG)
		return (regular);
	if (mode == S_IFLNK)
		return (slink);
	if (mode == S_IFSOCK)
		return (socket);
	if (mode == S_IFWHT)
		return (whiteout);
	return (unknown);
}

static void		ls_get_more(t_fileinfo *info, char *path, int *sts)
{
	acl_t		acl;

	info->isxattr = 0;
	*sts = lstat(path, &(info->s_stat));
	info->major = major(info->s_stat.st_rdev);
	info->minor = minor(info->s_stat.st_rdev);
	acl = acl_get_link_np(path, ACL_TYPE_EXTENDED);
	info->isxattr = listxattr(path, 0, 0, XATTR_NOFOLLOW);
	if (acl != 0)
	{
		info->isacl = 1;
		acl_free(acl);
	}
	else
		info->isacl = 0;
}

int				ls_get_fileinfo(t_fileinfo *info, char *name, char *path)
{
	int			status;

	ls_get_more(info, path, &status);
	if (status < 0)
		return (0);
	info->filetype = ls_get_filetype((info->s_stat).st_mode);
	ft_strcpy(info->filename, name);
	ft_strcpy(info->path, path);
	return (1);
}
