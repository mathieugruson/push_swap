/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_costs_move.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:20:47 by mgruson           #+#    #+#             */
/*   Updated: 2022/09/12 17:16:33 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_cost_move_b(t_list *b, int	b_len)
{
	int	move;
	
	move = 0;
	if (b->current_pos <= b_len / 2)
	{
		move = b->current_pos - 1; // rb
		b->name_move_b = 'o';
	}
	if (b->current_pos > b_len / 2)
	{
		move = b_len - b->current_pos + 1; //rrb
		b->name_move_b = 'e';
	}
	b->nbr_move_b = move;
	return (move);
}

int	is_the_bigger(t_list *a, t_list *b)
{
	t_list	*a2;
	
	a2 = a;
	while(a2)
	{
		if (b->final_pos < a2->final_pos)
			return 0;
		a2 = a2->next;
	}
	return (1);
}
int	get_cost_move_a(t_list *a, t_list *b, int a_len, int b_len)
{
	t_list	*a_cpy;
	t_list	*a_cpy2;
	int	move;
	int	index_a;
	int	gap;
	
	a_cpy = a;
	a_cpy2 = a;
	move = 0;
	index_a = 0;
	gap = 100000000;
	// printf("b final pos %d\n", b->final_pos);
	// printf("alen %d\n", a_len);
	if (b->final_pos == 1 || is_the_bigger(a, b) == 1)
	{
		// printf("check1, alen %d, blen %d, bfinalpos %d\n", a_len, b_len, b->final_pos );
		while(a_cpy)
		{
			if (gap > a_cpy->final_pos - b->final_pos)
			{	
				gap = a_cpy->final_pos - b->final_pos;
				move = index_a;
			}
			index_a++;
			a_cpy = a_cpy->next;
		}
	}
	if (b->final_pos != 1 && b->final_pos != a_len + b_len)
	{	
		while(a_cpy2)
		{
			// printf("get a : move %d, gap : %d, a_copy->final_pos %d, b->final_pos %d\n", move, gap, a_cpy2->final_pos, b->final_pos);
			if (gap > a_cpy2->final_pos - b->final_pos && a_cpy2->final_pos > b->final_pos)
			{	
				gap = a_cpy2->final_pos - b->final_pos;
				move = index_a;
			}
			index_a++;
			a_cpy2 = a_cpy2->next;
		}
	}	
	
	if (move <= a_len / 2)
		b->name_move_a = 'o';
	if (move > a_len / 2)
	{
		move = a_len - move; 
		b->name_move_a = 'e';
	}
	b->nbr_move_a = move;	
	return (move);
}

void update_costs_move(t_list **a, t_list **b)
{
	int	a_len;
	int	b_len;
	int	move_a;
	int	move_b;
	t_list	*b_cpy;
	
	b_cpy = *b;
	a_len = ft_lstlen(*a);
	b_len = ft_lstlen(*b);
	while(b_cpy)
	{
		move_b = get_cost_move_b(b_cpy, b_len);
		move_a = get_cost_move_a(*a, b_cpy, a_len, b_len);
		// printf(" cost move of final pos : %d, b %d, a %d, ra or rra ? %c\n", b_cpy->final_pos, move_b, move_a, b_cpy->name_move_a);
		b_cpy->cost_move = move_b + move_a;
		b_cpy = b_cpy->next;
	}
}