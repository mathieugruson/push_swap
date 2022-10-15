/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cost_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:20:47 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/15 11:57:47 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void get_cost_move(t_list **a, t_list **b)
{
    t_list  *tmp_a;
    t_list  *tmp_b;
  
    tmp_a = *a;
    tmp_b = *b;
    while(tmp_b)
    {
        tmp_b->cost_b = tmp_b->current_pos;
        if (tmp_b->current_pos > ft_lstlen(*b) / 2)
            tmp_b->cost_b = (ft_lstlen(*b) - tmp_b->current_pos) * -1;
        tmp_a->cost_a = tmp_b->target_pos;
        if (tmp_b->target_pos > ft_lstlen(*a) / 2)
            tmp_b->cost_a = (ft_lstlen(*a) - tmp_b->target_pos) * -1;
        tmp_b = tmp_b->next;       
    }
}

