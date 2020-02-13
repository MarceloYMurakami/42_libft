/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 19:03:34 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/13 20:53:55 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	temp[n + 1];

	ft_bzero(temp, n + 1);
	ptr1 = (unsigned char*)dest;
	ft_memcpy(temp, src, n);
	if ((unsigned int)ft_strlen(dest) >= (unsigned int)n)
		i = n;
	else
		i = ft_strlen(dest);
	ft_memcpy(ptr1, temp, i);
	return (dest);
}
