/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:18:18 by mgruson           #+#    #+#             */
/*   Updated: 2022/09/07 19:50:04 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*rotate(t_list **lst)
{
	t_list	*first;	
	t_list	*last;
	t_list	*second;
	
	if (!*lst)
		return (NULL);
	first = *lst; //
	if (!(*lst)->next)
		return (*lst); 	
	second = (*lst)->next;	
	last = ft_lstlast(*lst);
	first->next = NULL;
	last->next = first;
	
	*lst = second;
	update_current_positions(*lst, NULL);
	return (second);
}