/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 04:33:12 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/13 21:11:57 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	n;
	char	*substr;

	n = ft_strlen(s1);
	if ((unsigned char *)s1 == NULL)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1) != NULL)
		s1++;
	while (n > 0 && ft_strrchr(set, s1[n]) != NULL)
		n--;
	substr = ft_substr(s1, 0, n + 1);
	return (substr);
}
