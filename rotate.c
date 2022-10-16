/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:03:07 by mathieug          #+#    #+#             */
/*   Updated: 2022/10/16 13:26:14 by mgruson          ###   ########.fr       */
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
	first = *lst;
	if (!(*lst)->next)
		return (*lst);
	second = (*lst)->next;
	last = ft_lstlast(*lst);
	first->next = NULL;
	last->next = first;
	*lst = second;
	get_current_pos(*lst, NULL);
	return (second);
}

void	ra(t_list **lst)
{
	rotate(lst);
	write(1, "ra\n", 3);
}

void	rb(t_list **lst)
{
	rotate(lst);
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
