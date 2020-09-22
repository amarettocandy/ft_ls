/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_flags.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:04:31 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:04:34 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LS_FLAGS_H
# define LS_FLAGS_H

typedef unsigned char	t_1b;
typedef unsigned short	t_2b;
typedef unsigned int	t_4b;
typedef unsigned long	t_8b;

typedef struct			s_inputflags
{
	t_2b	sort_flags;
	t_2b	addlf_flags;
	t_2b	ctm_flgs;
	t_1b	general_flags;
	t_1b	view_flags;
}						t_flags;

# define DIR_ASFI 2
# define RECUR_LS 1

# define DRW_1COL 4
# define DRW_MCOL 2
# define DRW_LCOL 1

# define SORTI_R_ 16
# define SORTI_T_ 8
# define SORTI_U_ 4
# define SORTI_F_ 2
# define SORTI_SB 1

# define ADDLF_E_ 16
# define ADDLF_AA 8
# define ADDLF_G_ 4
# define ADDLF_H_ 2
# define ADDLF_O_ 1

# define CUSTM_I_ 64
# define CUSTM_S_ 32
# define CUSTM_GB 16
# define CUSTM_FB 8
# define CUSTM_LB 4
# define CUSTM_AB 2
# define CUSTM_A_ 1

#endif
