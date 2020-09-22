/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_mj_mn_sz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:00:52 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:00:56 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ls_inc.h"

void		ls_size_mj_mn_calc(struct s_lcol_f *f, t_fileinfo *fi)
{
	int		len;
	int		mj_ln;
	int		mn_ln;

	if (fi->filetype == chardev || fi->filetype == blockdev)
	{
		mj_ln = ls_get_decs(fi->major);
		mn_ln = ls_get_decs(fi->minor);
		f->mj_max = f->mj_max < mj_ln ? mj_ln : f->mj_max;
		f->mn_max = f->mn_max < mn_ln ? mn_ln : f->mn_max;
		len = f->mj_max + f->mn_max + 2;
	}
	else
		len = ls_get_decs(fi->s_stat.st_size);
	if (f->smax < len)
		f->smax = len;
}

char		*ls_put_device_id(char *s, struct s_lcol_f *f, t_fileinfo *fl)
{
	s = ls_strcat(ls_n2s_rformat(fl->major, f->mj_max, ' ', s), ", ");
	return (ls_strcat(ls_n2s_rformat(fl->minor, f->mn_max, ' ', s), " "));
}
