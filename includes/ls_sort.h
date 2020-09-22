/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_sort.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:04:55 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:04:59 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LS_SORT_H
# define LS_SORT_H

# include "ls_inc.h"

int		ls_cmp_lex(void *a, void *b);
int		ls_cmp_mtime(void *a, void *b);
int		ls_cmp_atime(void *a, void *b);
int		ls_cmp_size(void *a, void *b);
int		ls_cmp_dirafter(void *a, void *b);
void	ls_sort_arguments(void);
void	ls_sort_files(void);

#endif
