/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_cheapest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:57:05 by mathieug          #+#    #+#             */
/*   Updated: 2022/10/15 19:05:26 by mathieug         ###   ########.fr       */
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


void    double_move_to_do(t_list **a, t_list **b, t_list *cheapest_node)
{
    while (cheapest_node->cost_a < 0 && cheapest_node->cost_b < 0 )
    {
        rrr(a, b);
        cheapest_node->cost_a++;
        cheapest_node->cost_b++;
    }
    while (cheapest_node->cost_a > 0 && cheapest_node->cost_b > 0 )
    {
        rr(a, b);
        cheapest_node->cost_a--;
        cheapest_node->cost_b--;
    }   
}

void    simple_move_to_do(t_list **a, t_list **b, t_list *cheapest_node)
{
    while(cheapest_node->cost_a > 0)
    {
        ra(a);
        cheapest_node->cost_a--;
    }
    while(cheapest_node->cost_a < 0)
    {
        rra(a);
        cheapest_node->cost_a++;
    }
    while(cheapest_node->cost_b > 0)
    {
        rb(b);
        cheapest_node->cost_b--;
    }
    while(cheapest_node->cost_b < 0)
    {
        rrb(b);
        cheapest_node->cost_b++;
    }
}

void    move_cheapest_element(t_list **a, t_list **b)
{
    t_list  *cheapest_node;

    cheapest_node = find_cheapest_element(b);
    
    double_move_to_do(a, b, cheapest_node);
    simple_move_to_do(a, b, cheapest_node);
    pa(b, a);
}