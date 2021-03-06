/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:13:51 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:13:54 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	ind;

	ind = 0;
	if (s)
		if (f)
			while (s[ind])
			{
				(*f)(ind, &s[ind]);
				ind++;
			}
}
