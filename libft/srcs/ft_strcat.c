/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:12:41 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:12:43 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	ft_strcpy(&(s1[s1_len]), s2);
	return (s1);
}