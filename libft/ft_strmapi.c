/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:40:34 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/18 17:43:55 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				j;
	char			*str;
	unsigned int	i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		j = ft_strlen((char *)s);
		str = malloc(j * sizeof(char));
		ft_bzero(str, j);
		while (s[i] != 0)
		{
			str[i] = f(i, s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
