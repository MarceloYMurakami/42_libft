/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 15:09:41 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/17 13:06:33 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 15:09:41 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/17 12:53:13 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_string(char const *s1, char c)
{
	int	count;
	int	delim;

	count = 0;
	delim = 1;
	if (*s1 == '\0')
		return (0);
	while (*s1 != '\0')
	{
		if (*s1 == c)
			delim = 1;
		else if (delim == 1)
		{
			delim = 0;
			count++;
		}
		s1++;
	}
	return (count);
}

int		count_char(char const *s1, char c, int i)
{
	int	count;

	count = 0;
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

char	**split_strings(char const *s, char **split, char c, int len)
{
	int	str;
	int	chr;
	int	i;

	i = 0;
	str = 0;
	while (s[i] != '\0' && str < len)
	{
		chr = 0;
		while (s[i] == c)
			i++;
		split[str] = (char *)malloc(sizeof(char) * count_char(s, c, i) + 1);
		if (split[str] == NULL)
			return (clean((char const **)split, str));
		while (s[i] != '\0' && s[i] != c)
			split[str][chr++] = s[i++];
		split[str][chr] = '\0';
		str++;
	}
	split[str] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;

	if (s == NULL)
		return (NULL);
	i = count_string(s, c);
	split = (char **)malloc(sizeof(char *) * (i + 1));
	return (split_strings(s, split, c, i));
}
