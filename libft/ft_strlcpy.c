/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 19:25:01 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/02 17:56:50 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
    int               i;
    int               len;
    unsigned char     *psrc;
    unsigned char     *pdest;

    i = 0;
    len = 0;
    psrc = (unsigned char *)src;
    pdest = (unsigned char *)dest;
    while (dest[i] != '\0')
        i++;
    while (src[len] != '\0')
		len++;
    while (i-- > 0 && n-- > 0)
        *pdest++ = *psrc++;
    return ((unsigned int)len);
}
