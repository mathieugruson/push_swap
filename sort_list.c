/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:28:21 by mgruson           #+#    #+#             */
/*   Updated: 2022/09/12 17:57:38 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift_until_sort(t_list **a)
{
	t_list *first_node;
	int	i;
	int	a_len;

	first_node = *a;
	i = 0;
	a_len = ft_lstlen(*a);
	while (first_node && first_node->final_pos != 1)
	{
		first_node = first_node->next;
		i++; 
	}
	if (i <= a_len / 2)
	{
		while ((*a)->final_pos != 1)
		{	
			rotate(a);
			write(1, "ra\n", 3);
		}
	}
	if (i > a_len / 2)
	{
		while ((*a)->final_pos != 1)
		{	
			reverse(a);
			write(1, "rra\n", 4);
		}
	}
		
}

t_list	*sort_three(t_list **lst)
{
	t_list	*lst_cpy;
	int		first_lst;
	int		second_lst;
	int		last_lst;

	lst_cpy = *lst;
	first_lst = (*lst)->final_pos;
	*lst = (*lst)->next;
	second_lst = (*lst)->final_pos;
	*lst = ft_lstlast(*lst);
	last_lst = (*lst)->final_pos;
	*lst = lst_cpy;
	if (first_lst > second_lst && first_lst > last_lst)
		return (write(1, "ra\n", 3), rotate(lst));
	if (first_lst < second_lst && last_lst < second_lst)
		return (write(1, "rra\n", 4), reverse(lst));
	if (first_lst > second_lst && first_lst < last_lst)
		return (write(1, "sa\n", 3), swap(lst));
	return (*lst);
}

// t_list *find_best_sequence(t_list *a)
// {
// 	t_list	*a1;
// 	t_list	*a2;
// 	t_list	*best_start;
// 	int		i;
// 	int		f_pos;
// 	int		serie;
	
// 	a1 = a;
// 	a2 = a;
// 	i = 0;
// 	serie = 0;

// 	while (a1)
// 	{
// 		f_pos = a1->final_pos;
// 		a2 = a1->next;
// 		while (a2)
// 		{
// 			if (f_pos < a2->final_pos)
// 			{
// 				f_pos = a2->final_pos;
// 				i++;
// 			}
// 			a2 = a2->next;
// 		} 
// 		if (serie < i)
// 		{
// 			serie = i;
// 			best_start = a1;
// 		}
// 		i = 0;
// 		a1 = a1->next;
// 	}
// 	return (best_start);
// }

// void empty_the_rest(t_list **a, t_list **b, t_list *start)
// {
// 	int		a_len;
// 	int		f_pos;
	
// 	a_len = ft_lstlen(*a);
// 	a_len2 = a_len;
// 	f_pos = start->final_pos;
// 	while ((*a)->final_pos != start->final_pos)
// 	{
// 		rotate(a);
// 		write(1, "ra\n", 3);
	
// 	}
// 	while(a_len != 0)
// 	{
// 		while (f_pos <= (*a)->final_pos && a_len != 0)
// 		{
// 			f_pos = (*a)->final_pos;
// 			rotate(a);
// 			write(1, "ra\n", 3);
// 			a_len--;
// 		}
// 		while (f_pos > (*a)->final_pos && a_len != 0)
// 		{	
// 			push(a, b);
// 			write(1, "pb\n", 3);
				
// 			a_len--;
// 		}
// 	}
// }

// void pull_list(t_list **a, t_list **b)
// {
// 	t_list	*start;

// 	start = find_best_sequence(*a);
// 	// printf("start : %d, content : %s\n", start->final_pos, (char *)start->content);
// 	empty_the_rest(a, b, start);
// 	// printf("List A during sorting:\n");
// 	// ft_print_list(*a);
// 	// printf("List B during sorting:\n");
// 	// ft_print_list(*b);
// }

void pull_list(t_list **a, t_list **b)
{
	int		a_len;

	a_len = ft_lstlen(*a);
	while (ft_lstlen(*a) != a_len / 3)
	{
		while ((*a)->final_pos <= a_len / 3 && ft_lstlen(*a) != a_len / 3)
		{
			rotate(a);
			write(1, "ra\n", 3);			
		}
		while ((*a)->final_pos > a_len / 3 && (*a)->final_pos <= (a_len / 3 * 2) && ft_lstlen(*a) != a_len / 3)
		{	
			push(a, b);
			write(1, "pb\n", 3);
		}
		while ((*a)->final_pos >= (a_len / 3 * 2) && ft_lstlen(*a) != a_len / 3)
		{
			push(a, b);
			write(1, "pb\n", 3);
			rotate(b);
			write(1, "rb\n", 3);
			
		}		
	}
	// printf("List A during sorting 1:\n");
	// ft_print_list(*a);
	// printf("List B during sorting:\n");
	// ft_print_list(*b);
	while (ft_lstlen(*a)!= 3)
	{
		push(a, b);
		write(1, "pb\n", 3);
	}
	// printf("List A during sorting 2:\n");
	// ft_print_list(*a);
	// printf("List B during sorting:\n");
	// ft_print_list(*b);	
	while(check_sorting(a, 3) != 1)
		sort_three(a);
// 	printf("List A during sorting 3:\n");
// 	ft_print_list(*a);
// 	printf("List B during sorting:\n");
// 	ft_print_list(*b);
}

// void empty_list(t_list **a, t_list **b)
// {
// 	int	a_len;
// 	int	a_len_cpy;
	
// 	a_len = ft_lstlen(*a);
// 	a_len_cpy = a_len;
	
// 	while(a_len != 3)
// 	{	
// 		while ((*a)->final_pos == a_len_cpy || (*a)->final_pos == 1)
// 		{
// 			rotate(a);
// 			write(1, "ra\n", 3);		
// 		}	
// 		push(a, b);
// 		write(1, "pb\n", 3);
// 		if ((*b)->final_pos <= a_len_cpy / 3)
// 		{
// 			rotate(b);
// 			write(1, "rb\n", 3);		
// 		}		
		
// 		a_len--;
// 	}
// }

t_list	*sort_more(t_list **a, t_list **b)
{
	pull_list(a, b);
	// while(check_sorting(a, 3) != 1)
	// 	sort_three(a);
	fill_list(a, b);
	shift_until_sort(a);
	return (*a);
}

void	sort_list(t_list **a, t_list **b, int argc)
{
	if (argc == 3)
	{
		if (check_sorting(a, ft_lstlen(*a)) == 0)
		{
			swap(a);
			write(1, "sa\n", 3);
		}
	}	
	if (argc == 4)
	{
		while (check_sorting(a, 3) != 1)
			sort_three(a);
	}
	if (argc > 4)
		sort_more(a, b);
}

