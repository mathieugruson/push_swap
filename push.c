/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:03:13 by mathieug          #+#    #+#             */
/*   Updated: 2022/10/16 13:21:08 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **src, t_list **dst)
{
	push(src, dst);
	write(1, "pa\n", 3);
}

void	pb(t_list **src, t_list **dst)
{
	push(src, dst);
	write(1, "pb\n", 3);
}

t_list	*push(t_list **src, t_list **dst)
{	
	t_list	*tmp;

	if (*src == NULL)
		return (NULL);
	tmp = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = tmp;
	get_current_pos(*src, *dst);
	return (tmp);
}
