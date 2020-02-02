/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 19:38:40 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/01 21:31:14 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *big, const char *little, size_t n)
{
    int             i;
    unsigned char    *fstr;
    unsigned char     *str;
    unsigned char     *find;

    i = 0;
    str = (unsigned char *)big;
    find = (unsigned char *)little;
    if (*find == '\0')
        return ((char *)big);
    while (*str != '\0' && n-- > 0)
    {
        if (*str == *find)
        {
            fstr = (unsigned char *)str;
            while (find[i] != '\0' && find[i] == *fstr)
            {
              i++;
              fstr++;
              if (find[i] == '\0')
                return((char *)str);
            }
            i = 0;
        }
        str++;
    }
    return (NULL);
}
