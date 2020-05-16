/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:45:46 by mmurakam          #+#    #+#             */
/*   Updated: 2020/05/09 23:12:57 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned int	len;
	unsigned int	total;
	unsigned int	i;

	len = ft_strlen(dest);
	total = ft_strlen(src);
	if (len >= n)
		return (n + total);
	i = 0;
	while (src[i] != '\0' && n > (len + 1 + i))
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (len + total);
}
