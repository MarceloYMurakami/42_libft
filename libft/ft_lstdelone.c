/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 13:18:12 by mmurakam          #+#    #+#             */
/*   Updated: 2020/02/21 17:17:37 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(t_list *lst)
{
	t_list *current;

	current = lst;
	current->content = NULL;
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst);
}
