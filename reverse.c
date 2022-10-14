/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 23:17:02 by mgruson           #+#    #+#             */
/*   Updated: 2022/09/07 19:49:54 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*reverse(t_list **lst)
{
	t_list	*last;
	t_list	*before_last;
	int		lstlen;

	if ((*lst)->next == NULL)
		return (*lst);	
	lstlen = ft_lstlen(*lst);
	last = *lst;
	last = ft_lstlast(last);
	before_last = *lst;
	while(lstlen-- != 2)
		before_last = before_last->next; 
	before_last->next = NULL; 
	last->next = *lst;
	*lst = last;
	update_current_positions(*lst, NULL);
	return (*lst);
}
