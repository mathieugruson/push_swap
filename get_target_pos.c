/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_target_pos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 09:57:37 by mathieug          #+#    #+#             */
/*   Updated: 2022/10/15 12:38:12 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int highest_value_exist_in(t_list *a, t_list *b)
{
    while(a)
    {
        if (b->final_pos < a->final_pos)
            return (0);
        a = a->next;
    }
    return (1);    
}

t_list *lowest_value_of(t_list *a)
{
    t_list *lowest_value;

    lowest_value = a;
    while(a)
    {
        if (a->final_pos < lowest_value->final_pos)
            lowest_value = a;
        a = a->next;
    }
    return (lowest_value);
}

int nearest_value_higher_of(t_list *a, t_list *b)
{
    int difference;
    int nearest_value_higher;

    difference = a->final_pos - b->final_pos;
    nearest_value_higher = 0;  
    while(a)
    {
        if (difference > a->final_pos - b->final_pos && a->final_pos - b->final_pos > 0)
            nearest_value_higher = a->final_pos;
        a = a->next;
    }
    return (nearest_value_higher);
}

void get_target_pos(t_list **a, t_list **b)
{
    t_list  *tmp_b;

    tmp_b = *b;
    while(tmp_b)
    {
        if (highest_value_exist_in(*a, tmp_b))
            tmp_b->target_pos = nearest_value_higher_of(*a, *b);
    
        else
            tmp_b->target_pos = lowest_value_of(*a)->final_pos;
        tmp_b = tmp_b->next;        
    }
}