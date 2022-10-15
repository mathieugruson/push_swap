/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_cheapest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:57:05 by mathieug          #+#    #+#             */
/*   Updated: 2022/10/15 12:53:27 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     no_sign(int   nbr)
{
    if (nbr < 0)
        nbr = nbr * -1;
    return (nbr);
}

t_list    *find_cheapest_element(t_list **b)
{
    t_list  *tmp_b;
    t_list  *cheapest_node;
    int     cheapest;

    tmp_b = *b;
    cheapest = INT_MAX;
    while(tmp_b)
    {
        if (no_sign(tmp_b->cost_a) + no_sign(tmp_b->cost_b) < cheapest)
        { 
            cheapest = no_sign(tmp_b->cost_a) + no_sign(tmp_b->cost_b);
            cheapest_node = tmp_b;
        }    
        tmp_b = tmp_b ->next;
    }
    return (cheapest_node);
}

// a diviser en plusieurs fonctions 
void    move_cheapest_element(t_list **a, t_list **b)
{
    t_list  *cheapest_node;

    cheapest_node = find_cheapest_element(b);
    while (cheapest_node->cost_a++ < 0 && cheapest_node->cost_b++ < 0)
        rrr(a, b);
    while (cheapest_node->cost_a-- > 0 && cheapest_node->cost_b-- > 0)
        rr(a, b);
    while (cheapest_node->cost_a != 0 && cheapest_node->cost_b != 0)
    {
        while (cheapest_node->cost_a != 0)
        {
            if (cheapest_node->cost_a-- > 0)
            {
                ra(a);
                printf("cheapest_node->cost_a %d\n", cheapest_node->cost_a);
            }
            if (cheapest_node->cost_a++ < 0)
                rra(a);
        }
        while (cheapest_node->cost_b != 0)
        {
            if (cheapest_node->cost_b-- > 0)
                rb(b);
            if (cheapest_node->cost_b++ < 0)
                rrb(b);
        }
    }
    pa(b, a);
}