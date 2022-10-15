/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_target_pos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 09:57:37 by mathieug          #+#    #+#             */
/*   Updated: 2022/10/15 20:29:59 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int highest_value_exist_in(t_list *a, t_list *b)
{
    while(a)
    {
        if (b->final_pos < a->final_pos)
            return (1);
        a = a->next;
    }
    return (0);    
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
    int tmp;
    int final_pos;

    final_pos = 0;
    tmp = INT_MAX;
    while(a)
    {
        if ((a->final_pos - b->final_pos) > 0 && (a->final_pos - b->final_pos) < tmp)
        {
            tmp = a->final_pos - b->final_pos;
            final_pos = a->final_pos;
        }
        // printf(" a->final_pos %d, b->final_pos %d, tmp %d, final_pos %d\n", a->final_pos, b->final_pos, tmp, final_pos);
        a = a->next;
    }
    return (final_pos);
}

void get_target_pos(t_list **a, t_list **b)
{
    t_list  *tmp_b;

    tmp_b = *b;
    while(tmp_b)
    {
        if (highest_value_exist_in(*a, tmp_b))
        {
            // printf("1\n");
            tmp_b->target_pos = nearest_value_higher_of(*a, tmp_b);
        }
        else
            tmp_b->target_pos = lowest_value_of(*a)->final_pos;
        tmp_b = tmp_b->next;        
    }
}