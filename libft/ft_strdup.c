/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 20:29:32 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/13 20:41:57 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	n;
	char	*ptr;
	int		i;

	i = 0;
	n = ft_strlen((char *)s);
	ptr = ft_calloc(n + 1, sizeof(s[0]));
	while (n-- > 0)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
