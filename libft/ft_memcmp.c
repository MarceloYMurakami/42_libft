/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 13:10:45 by mmurakam          #+#    #+#             */
/*   Updated: 2020/01/26 18:52:25 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int s1;
	int s2;
	unsigned char *ptr1;
	unsigned char *ptr2;

	s1 = 0;
	s2 = 0;
	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	while (n-- > 0)
	{
		if (*ptr1 != '\0')
			s1 = s1 + *(ptr1)++;
		if (*ptr2 != '\0')
			s2 = s2 + *(ptr2)++;
	}
	return (s1-s2);
}
