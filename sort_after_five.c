/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_after_five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:41:36 by mathieug          #+#    #+#             */
/*   Updated: 2022/10/16 16:41:05 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift_list(t_list **a)
{
	while (lowest_value_of(*a)->current_pos > ft_lstlen(*a) / 2
		|| lowest_value_of(*a)->current_pos != 1)
		rra(a);
	while (lowest_value_of(*a)->current_pos > ft_lstlen(*a) / 2
		|| lowest_value_of(*a)->current_pos != 1)
		ra(a);
}

void	empty_unless_three(t_list **a, t_list **b)
{
	int	alen;

	alen = ft_lstlen(*a);
	while (ft_lstlen(*a) != (alen / 2 + 1) && ft_lstlen(*a) > 3)
	{
		if ((*a)->final_pos <= alen / 2)
			pb(a, b);
		if ((*a)->final_pos > alen / 2)
			ra(a);
	}
	while (ft_lstlen(*a) != 3)
		pb(a, b);
}

void	sort_after_five(t_list **a, t_list **b)
{
	empty_unless_three(a, b);
	sort_three(a);
	while (*b)
	{
		get_target_pos(a, b);
		get_cost_move(a, b);
		move_cheapest_element(a, b);
	}
	if (!check_sorting(a, ft_lstlen(*a)))
		shift_list(a);
}
