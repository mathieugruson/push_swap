/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:59:11 by mgruson           #+#    #+#             */
/*   Updated: 2022/09/12 17:13:57 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*find_costleast(t_list **b)
{
	t_list	*b_bis;
	t_list	*b_tierce;
	int		costmove;
	
	b_bis = *b;
	b_tierce = *b;
	costmove = b_bis->cost_move;
	while(b_bis)
	{
		if (costmove > b_bis->cost_move)
		{
			b_tierce = b_bis; 
		}
		b_bis = b_bis->next;
	}
	return (b_tierce);
}

void	move_lists(t_list **a, t_list **b, t_list *b_costleast)
{
	// printf("b_coastleast->name move a : %c, et b : %c\n", b_costleast->name_move_a, b_costleast->name_move_b);
	// printf("b final pos : %d, b_costleast->name_move_a : %c\n", b_costleast->final_pos, b_costleast->name_move_a);
	if (b_costleast->name_move_b == 'o' && b_costleast->name_move_a == 'o' && b_costleast->current_pos != 1 && b_costleast->nbr_move_a != 0)
	{
		while (b_costleast->current_pos != 1 && b_costleast->nbr_move_a != 0 )
		{	
			doublerotate(b, a);
			b_costleast->nbr_move_a-- ;
			write(1, "rr\n", 3);
		}
	}
	if (b_costleast->name_move_b == 'e' && b_costleast->name_move_a == 'e' && b_costleast->current_pos != 1 && b_costleast->nbr_move_a != 0)
	{
		while (b_costleast->current_pos != 1 && b_costleast->nbr_move_a != 0 )
		{	
			doublereverse(b, a);
			b_costleast->nbr_move_a-- ;
			write(1, "rrr\n", 4);
		}
	}
	while (b_costleast->name_move_b == 'o' && b_costleast->current_pos != 1 )
	{	
		rotate(b);
		write(1, "rb\n", 3);
	}
	while (b_costleast->name_move_b == 'e' && b_costleast->current_pos != 1 )
	{
		reverse(b);
		write(1, "rrb\n", 4);
	}
	while (b_costleast->name_move_a == 'o' && b_costleast->nbr_move_a != 0)
	{
		rotate(a);
		b_costleast->nbr_move_a-- ;
		write(1, "ra\n", 3);

	}	
	while (b_costleast->name_move_a == 'e' && b_costleast->nbr_move_a != 0)
	{
		reverse(a);
		b_costleast->nbr_move_a-- ;
		write(1, "rra\n", 4);
	}
	// printf("List A during sorting (move_list)\n"); //
	// ft_print_list(*a); //
	// printf("List B during sorting (move_list\n"); //
	// ft_print_list(*b); //
	// printf("\n");
		
}

void	transfer_costleast(t_list **a, t_list **b)
{
	t_list	*b_costleast;
	
	b_costleast = find_costleast(b);
	// printf("b_costleast %s\n", (char *)b_costleast->content);
	move_lists(a, b, b_costleast);
	push(b, a);
	write(1, "pa\n", 3);
}	

void	fill_list(t_list **a, t_list **b)
{
	int i;

	i = 0;
	// printf("List A during sorting (fill_list)\n"); //
	// ft_print_list(*a); //
	// printf("List B during sorting (fill_list\n"); //
	// ft_print_list(*b); //
	// printf("\n");	
	while(*b)
	{
		update_costs_move(a, b);
		// printf("List A during sorting %d:\n", i); //
		// ft_print_list(*a); //
		// printf("List B during sorting cost %d:\n", i); //
		// ft_print_list(*b); //
		// printf("\n");
		transfer_costleast(a, b);
		i++;
	}
}