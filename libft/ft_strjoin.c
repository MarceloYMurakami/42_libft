/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 03:27:19 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/13 20:56:44 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	len1;
	unsigned int	len2;

	len1 = 0;
	len2 = 0;
	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc((len1 + len2 + 1) * sizeof(char));
	while (len1-- > 0)
	{
		str[i] = *s1;
		i++;
		s1++;
	}
	while (len2-- > 0)
	{
		str[i] = *s2;
		s2++;
		i++;
	}
	return (str);
}
