/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:12:59 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:13:02 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned char	*sc1;
	unsigned char	*sc2;

	i = 0;
	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	while (sc1[i] == sc2[i] && sc1[i] != 0)
		i++;
	return (sc1[i] - sc2[i]);
}
