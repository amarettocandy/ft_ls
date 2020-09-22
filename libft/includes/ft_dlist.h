/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:03:23 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:03:25 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DLIST_H
# define FT_DLIST_H

# include <string.h>

typedef struct		s_dlist
{
	void			*content;
	size_t			size;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}					t_dlist;

t_dlist				*ft_dlstnew(void *content, size_t size);
void				ft_dlstpush(t_dlist **dlst, t_dlist *nlst);
void				ft_dlstunshift(t_dlist **dlst, t_dlist *nlst);
t_dlist				*ft_dlstget(t_dlist *cdlst, size_t ind);
t_dlist				*ft_dlstrget(t_dlist *cdlst, size_t ind);
void				ft_dlstinsert(t_dlist *insrt, t_dlist *prv, t_dlist *nxt);
void				ft_dlstrmelem(t_dlist **deldlst);
t_dlist				*ft_dlstcut(t_dlist **cutdlst);
void				ft_dlstdel(t_dlist **dlst, size_t n);
t_dlist				*ft_dlstshift(t_dlist **list);
void				ft_dlstswap(t_dlist *a, t_dlist *b);
void				ft_dlst_gnsort(t_dlist **lt, int (*cmp)(void *, void *));
void				ft_dlst_rgnsort(t_dlist **lt, int (*cmp)(void *, void *));

#endif
