/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cost_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:20:47 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/15 20:43:07 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int target_pos_index(t_list *a, t_list *b)
{
    // printf("c3\n");
    while(b->target_pos != a->final_pos)
    {
        a = a->next;
    }
    // printf("a->current_pos%d\n", a->current_pos);
    return (a->current_pos);
}

void get_cost_move(t_list **a, t_list **b)
{
    t_list  *tmp_b;
  
    tmp_b = *b;
    while(tmp_b)
    {
        tmp_b->cost_b = tmp_b->current_pos - 1;
        if (tmp_b->cost_b > ft_lstlen(*b) / 2)
            tmp_b->cost_b = (ft_lstlen(*b) - tmp_b->cost_b) * -1;            
        tmp_b->cost_a = target_pos_index(*a, tmp_b) - 1;
        // printf("tmp_b->cost_a%d\n", tmp_b->cost_a);
        if (tmp_b->cost_a > ft_lstlen(*a) / 2)
            tmp_b->cost_a = (ft_lstlen(*a) - tmp_b->cost_a) * -1;
        tmp_b = tmp_b->next;       
    }
}

