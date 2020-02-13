/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:23:18 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/13 20:51:27 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr1;
	const unsigned char *ptr2;

	ptr1 = (unsigned char*)dest;
	ptr2 = (unsigned char*)src;
	while (n-- > 0)
		*(ptr1)++ = *(ptr2)++;
	return (dest);
}
