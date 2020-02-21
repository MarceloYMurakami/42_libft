/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 17:32:35 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/21 17:38:50 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void(*f)(void *))
{
	t_list	*current;

	if (lst == NULL)
		return;
	current = lst;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}
