/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:45:46 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/02 17:57:06 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned int 	i;
	unsigned int	len;
	unsigned char	*pdest;
	unsigned char	*psrc;

	i = 0;
	len = 0;
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (dest[i++] != '\0')
		pdest++;
	while (src[len] != '\0')
		len++;
	len = len + i;
	while (i++ <= n - 1)
		*pdest++ = *psrc++;
	*pdest = '\0';
	return((unsigned int)len - 1);
}
