/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 19:25:01 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/01 15:37:17 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);

size_t  ft_strlcpy(char *dest, const char *src, size_t n)
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

int main()
{
	int a;
	char src[11] = "Meu nome e";
	char dest[6] = "Andre";

	a = ft_strlcpy(dest, src, sizeof(src));
	printf("%i\n", a);
	printf("%s\n", dest);
}
