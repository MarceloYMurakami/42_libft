/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 13:26:19 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/02 17:57:14 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int sum1;
	unsigned int sum2;

	sum1 = 0;
	sum2 = 0;
	while (n-- > 0)
	{
		if (*str1 != '\0')
		{
			sum1 = sum1 + *str1;
			str1++;
		}
		if (*str2 != '\0')
		{
			sum2 = sum2 + *str2;
			str2++;
		}
	}
	return (sum1 - sum2);
}
