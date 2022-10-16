/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cost_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:20:47 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/16 13:23:54 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	target_pos_index(t_list *a, t_list *b)
{
	while (b->target_pos != a->final_pos)
	{
		a = a->next;
	}
	return (a->current_pos);
}

void	get_cost_move(t_list **a, t_list **b)
{
	t_list	*tmp_b;

	tmp_b = *b;
	while (tmp_b)
	{
		tmp_b->cost_b = tmp_b->current_pos - 1;
		if (tmp_b->cost_b > ft_lstlen(*b) / 2)
			tmp_b->cost_b = (ft_lstlen(*b) - tmp_b->cost_b) * -1;
		tmp_b->cost_a = target_pos_index(*a, tmp_b) - 1;
		if (tmp_b->cost_a > ft_lstlen(*a) / 2)
			tmp_b->cost_a = (ft_lstlen(*a) - tmp_b->cost_a) * -1;
		tmp_b = tmp_b->next;
	}
}
