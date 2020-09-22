/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countw_delim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilda <cmilda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:05:58 by cmilda            #+#    #+#             */
/*   Updated: 2020/02/24 00:06:00 by cmilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_countw_delim(char const *s, char delim)
{
	unsigned int	i;
	unsigned int	count;
	unsigned char	f_word;

	i = 0;
	f_word = 0;
	count = 0;
	if (s)
		while (s[i])
		{
			if (s[i] == delim || s[i] == 0)
				if (f_word)
					f_word = 0;
			if (s[i] != delim && s[i])
				if (!f_word)
				{
					count++;
					f_word = 1;
				}
			i++;
		}
	return (count);
}
