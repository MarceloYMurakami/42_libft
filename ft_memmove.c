/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 19:03:34 by mmurakam          #+#    #+#             */
/*   Updated: 2020/01/26 11:44:31 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptr1;
	unsigned char *ptr2;
	size_t i;

	ptr1 = (unsigned char*)dest;
	ptr2 = (unsigned char*)src;
	if (ft_strlen(dest) >= n)
		i = n;
	else
		i = ft_strlen(dest);
	ft_bzero(dest, ft_strlen(dest));
	if (strlen(dest) >= strlen(src))
		ft_memcpy(ptr1, ptr2, n);
	else
		ft_memcpy(ptr1, ptr2, i);
	return (dest);
}
