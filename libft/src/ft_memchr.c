/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 11:44:46 by mmurakam          #+#    #+#             */
/*   Updated: 2020/05/09 23:40:28 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char f;
	unsigned char *ptr;

	f = (unsigned char)c;
	ptr = (unsigned char *)str;
	while (n-- > 0)
	{
		if (f == *(ptr++))
			return (--ptr);
	}
	return (NULL);
}
