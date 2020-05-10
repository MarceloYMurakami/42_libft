/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 13:10:45 by mmurakam          #+#    #+#             */
/*   Updated: 2020/05/09 17:48:24 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int				s1;
	int				s2;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	s1 = 0;
	s2 = 0;
	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	while (n-- > 0)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (s1 - s2);
}
