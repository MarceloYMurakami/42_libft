/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 19:38:40 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/02 17:55:58 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	unsigned int i;
	unsigned int p;

	i = 0;
	p = 0;
	if (*little == '\0')
		return (char *)big;
	while (big[p] != '\0' && p < n)
	{
		if (big[p] == *little)
		{
			i = 1;
			while (little[i] != '\0' && big[p+i] == little[i] && (size_t)(p + i) < n)
				i++;
			if (little[i] == '\0')
				return ((char *)&big[p]);
		}
		p++;
	}
	return (NULL);
}
