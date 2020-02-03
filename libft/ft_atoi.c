/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 17:26:59 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/03 19:25:09 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int				sign;
	unsigned int	n;

	n = 0;
	sign = 1;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\f' ||
			*nptr == '\r' || *nptr == '\n' || *nptr == '\v')
			nptr++;
	if (*nptr == 45)
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == 43)
		nptr++;
	while (*nptr >= 48 && *nptr <= 57)
	{
		n = n * 10 + *nptr - '0';
		nptr++;
	}
	return (n*sign);
}
