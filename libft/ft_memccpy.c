/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 11:14:53 by mmurakam          #+#    #+#             */
/*   Updated: 2020/01/25 18:38:48 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *ptr1;
    const unsigned char *ptr2;

    ptr1 = (unsigned char*)dest;
    ptr2 = (unsigned char*)src;

    while (n-- > 0 || *ptr2 == c)
        *(ptr1)++ = *(ptr2)++;
    return (dest);
}
