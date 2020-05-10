/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 17:56:53 by mmurakam          #+#    #+#             */
/*   Updated: 2020/05/09 21:02:24 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	newlst = NULL;
	while (lst != NULL)
	{
		if(!(current = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&newlst, del);
			return(NULL);
		}
		ft_lstadd_back(&newlst, current);
		lst = lst->next;
	}
	return(newlst);
}
