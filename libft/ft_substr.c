/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 02:06:28 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/09 03:26:08 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*sub;
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	sub = malloc((len + 1) * sizeof(s[0]));
	if (len == 0)
		return (sub);
	while (i < start)
	{
		i++;
		s++;
	}
	while (len > 0 && *s != '\0')
	{
		sub[j] = *s;
		s++;
		j++;
		len--;
	}
	return (sub);
}
