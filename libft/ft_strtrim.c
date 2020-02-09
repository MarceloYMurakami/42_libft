/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 04:33:12 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/09 05:24:38 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_startrim(const char *s1, int c)
{
	if (*s1 == c)
	{
		s1++;
		return (0);
	}
	else
		return (1);
}

int	ft_endtrim(const char *s1, int c)
{
	if (*s1 == c)
	{
		s1--;
		return (0);
	}
	else
		return (1);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	char			*substr;
	size_t			size;
	unsigned int	flag;
	unsigned int	i;

	flag = 0;
	i = 0;
	size = ft_strlen(s1);
	substr = ft_calloc(ft_strlen(s1), sizeof(char));
	while (flag == 0 && set[i] != '\0')
	{
		if (ft_startrim(s1, set[i]) == 1 && ft_endtrim(&s1[size], set[i] == 1));
			flag = 1;
		if (ft_endtrim == 0)
			size--;
	}
	while (*s1 != s1[size])
}
