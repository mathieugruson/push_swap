/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_after_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:41:36 by mathieug          #+#    #+#             */
/*   Updated: 2022/10/14 20:11:13 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void empty_up_to_three(t_list **a, t_list **b)
{
    int alen;
    
    alen = ft_lstlen(*a);

    while (ft_lstlen(*a) != alen / 2 && ft_lstlen(*a) > 3)
    {
        if ((*a)->final_pos <= alen / 2)
            pb(a, b);
        if ((*a)->final_pos > alen / 2)
            ra(a); 
    }
    while (ft_lstlen(*a) != 3)
        pb(a, b);
}

void sort_after_three(t_list **a, t_list **b)
{
	empty_up_to_three(a, b);
	sort_up_to_three(a);
}
