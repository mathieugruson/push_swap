/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:03:03 by mathieug          #+#    #+#             */
/*   Updated: 2022/10/16 13:49:14 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*swap(t_list **lst)
{
	t_list	*second;
	t_list	*third;

	second = (*lst)->next;
	third = second->next;
	(*lst)->next = third;
	second->next = *lst;
	*lst = second;
	get_current_pos(*lst, NULL);
	return (second);
}

void	sa(t_list **lst)
{
	swap(lst);
	write(1, "sa\n", 3);
}

void	sb(t_list **lst)
{
	swap(lst);
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
