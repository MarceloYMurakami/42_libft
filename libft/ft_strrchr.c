/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 18:31:22 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/01 19:37:30 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	unsigned int	i;    
	unsigned char	*pstr;

	i = 1;
	pstr = (unsigned char *)str;
	while (*pstr++ != '\0')
		i++;
	while (i > 0)
	{
		pstr--;
		if (*pstr == c)
			return ((char *)pstr);
		i--;
	}
	return (NULL);
}
