/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:45:46 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/13 20:49:17 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned int	len;
	unsigned int	total;

	len = 0;
	total = 0;
	while (dest[len] != '\0')
		len++;
	while (src[total] != '\0')
		total++;
	if (len >= n)
		total = total + n;
	else
		total = total + len;
	while (*src != '\0' && len + 1 < n)
	{
		dest[len] = *src;
		src++;
		len++;
	}
	dest[len] = '\0';
	return (total);
}
