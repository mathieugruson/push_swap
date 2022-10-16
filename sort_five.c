/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:33:32 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/16 16:43:34 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_list **a, t_list **b)
{
	while (ft_lstlen(*a) > 3)
	{
		if ((*a)->final_pos < 3)
			pb(a, b);
		else
			ra(a);
	}
	sort_three(a);
	if ((*b)->final_pos < (*b)->next->final_pos)
		sb(b);
	while (*b)
		pa(b, a);
}
