/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:02:40 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:02:43 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ls_inc.h"

static void	spasibo_norminettete(void)
{
	ft_dlst_gnsort(&g_args, &ls_cmp_lex);
	if (g_flags.sort_flags & SORTI_SB)
		ft_dlst_gnsort(&g_args, &ls_cmp_size);
	else if ((g_flags.sort_flags & SORTI_T_) && \
	!(g_flags.sort_flags & SORTI_U_))
		ft_dlst_gnsort(&g_args, &ls_cmp_mtime);
	else if (g_flags.sort_flags & SORTI_U_)
		ft_dlst_gnsort(&g_args, &ls_cmp_atime);
}

void		ls_sort_arguments(void)
{
	if (!(g_flags.sort_flags & SORTI_F_))
	{
		if (g_flags.sort_flags & SORTI_R_)
		{
			spasibo_norminettete();
		}
		else
		{
			ft_dlst_rgnsort(&g_args, &ls_cmp_lex);
			if (g_flags.sort_flags & SORTI_SB)
				ft_dlst_rgnsort(&g_args, &ls_cmp_size);
			else if ((g_flags.sort_flags & SORTI_T_) && \
				!(g_flags.sort_flags & SORTI_U_))
				ft_dlst_rgnsort(&g_args, &ls_cmp_mtime);
			else if (g_flags.sort_flags & SORTI_U_)
				ft_dlst_rgnsort(&g_args, &ls_cmp_atime);
		}
	}
	ft_dlst_gnsort(&g_args, &ls_cmp_dirafter);
}

void		ls_sort_files(void)
{
	if (!(g_flags.sort_flags & SORTI_F_))
	{
		if (g_flags.sort_flags & SORTI_R_)
		{
			ft_dlst_rgnsort(&g_files, &ls_cmp_lex);
			if (g_flags.sort_flags & SORTI_SB)
				ft_dlst_rgnsort(&g_files, &ls_cmp_size);
			else if ((g_flags.sort_flags & SORTI_T_) && \
				!(g_flags.sort_flags & SORTI_U_))
				ft_dlst_rgnsort(&g_files, &ls_cmp_mtime);
			else if (g_flags.sort_flags & SORTI_U_)
				ft_dlst_rgnsort(&g_files, &ls_cmp_atime);
		}
		else
		{
			ft_dlst_gnsort(&g_files, &ls_cmp_lex);
			if (g_flags.sort_flags & SORTI_SB)
				ft_dlst_gnsort(&g_files, &ls_cmp_size);
			else if ((g_flags.sort_flags & SORTI_T_) && \
			!(g_flags.sort_flags & SORTI_U_))
				ft_dlst_gnsort(&g_files, &ls_cmp_mtime);
			else if (g_flags.sort_flags & SORTI_U_)
				ft_dlst_gnsort(&g_files, &ls_cmp_atime);
		}
	}
}
