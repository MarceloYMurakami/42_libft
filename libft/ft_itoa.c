/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 13:18:47 by mmurakam          #+#    #+#             */
/*   Updated: 2020/05/09 23:42:06 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_numbers(int i)
{
	int				n;
	unsigned int	j;

	n = 0;
	j = (unsigned int)i;
	if (j == 0)
		return (1);
	while (ft_isdigit(j % 10 + '0') && (j / 10 > 0 || j != 0))
	{
		while (j > 0)
		{
			n++;
			j = j / 10;
		}
	}
	return (n);
}

char	*turn_string(unsigned int num, int sign, int len, char *str)
{
	while (len > 0)
	{
		if (ft_isdigit(num % 10 + '0'))
		{
			str[len - 1] = num % 10 + '0';
			num = num / 10;
			len--;
		}
		else
			num = num / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int				t;
	int				sign;
	char			*str;
	unsigned int	num;

	sign = 1;
	num = n;
	t = 0;
	if (n < 0)
	{
		sign = -1;
		t = t + 1;
		num = (unsigned int)(n * sign);
	}
	t = t + count_numbers(num);
	if (!(str = malloc((t + 1) * sizeof(char))))
		return (NULL);
	ft_bzero(str, t + 1);
	return (turn_string(num, sign, t, str));
}
