/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 18:23:07 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/13 20:49:05 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char *pstr;

	pstr = (unsigned char *)str;
	while (*pstr != '\0')
	{
		if (*pstr == c)
			return ((char *)pstr);
		pstr++;
	}
	if (*pstr == c)
		return ((char *)pstr);
	return (NULL);
}
