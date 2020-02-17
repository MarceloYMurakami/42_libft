/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 15:09:41 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/16 22:33:27 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_string(char const *s1, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			count++;
		i++;
	}
	return (count);
}

int		count_char(char const *s1, char c, int i)
{
	int	count;

	while (s1[i] != c && s1[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

char	**clean(char const **split, int i)
{
	while (i > 0)
	{
		i--;
		free((void *)split[i]);
	}
	free(split);
	return (NULL);
}



char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;

	if (s == NULL)
		return (NULL);
	i = count_string(s, c);
	split = (char **)malloc(sizeof(char *) * (i + 1));
	return ()
}
