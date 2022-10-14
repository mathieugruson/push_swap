/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:03:09 by mathieug          #+#    #+#             */
/*   Updated: 2022/10/14 19:47:01 by mathieug         ###   ########.fr       */
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
	get_current_pos(*lst, NULL);
	return (*lst);
}

void	rra(t_list **lst)
{
    reverse(lst);
	write(1, "rra\n", 4);
}

void	rrb(t_list **lst)
{
    reverse(lst);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
    reverse(a);
    reverse(b);
	write(1, "rrr\n", 4);
}
