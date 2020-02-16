/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 04:33:12 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/16 15:02:44 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			n;
	char			*substr;
	unsigned char	*str;
	int				count;

	n = ft_strlen(s1);
	str = (unsigned char *)s1;
	count = 0;
	if ((unsigned char *)s1 == NULL)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1) != NULL)
	{
		s1++;
		count++;
	}
	if (*s1 != '\0')
	{
	while (n > 0 && ft_strrchr(set, str[n]) != NULL)
		n--;
	}
	substr = ft_substr(s1, 0, n + 1 - count);
	return (substr);
}
