/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 19:25:01 by mmurakam          #+#    #+#             */
/*   Updated: 2020/05/09 18:00:44 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	int	i;
	int	len;

	if (dest == NULL)
		return (0);
	len = 0;
	i = 0;
	while (src[i] != '\0')
		i++;
	len = i;
	if (n == 0)
		return (len);
	while (i > 0 && n - 1 > 0)
	{
		*dest = *src;
		i--;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return ((unsigned int)len);
}
