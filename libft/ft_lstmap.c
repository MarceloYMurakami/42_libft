/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 17:56:53 by mmurakam          #+#    #+#             */
/*   Updated: 2020/04/25 18:04:42 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*current;
	t_list	*next;

	if (lst == NULL)
		return (NULL);
	current = lst;
	newlst = (t_list *)malloc(sizeof(t_list));
	while (current != NULL)
	{
		next = current->next;
		if (del != NULL)
			del(current);
		current->content = f(current->content);
		newlst = current;
		newlst->next = (t_list *)malloc(sizeof(t_list));
		newlst->next = NULL;
		newlst = newlst->next;
		current = next;
	}
	return(newlst);
}
