/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_little_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:56:48 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/14 16:01:38 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_little_sort_a(t_list **a, t_list **b)
{
	t_list	*a_cpy;
	int		first_a;
	int		second_a;
	int		last_a;
	
	if ( *b && check_sorting(a, ft_lstlen(*a)) == 1 && ft_atoi((*a)->content) > ft_atoi((*b)->content))
	 	return (*a);
	a_cpy = *a;
	first_a = ft_atoi((*a)->content);
	*a = (*a)->next;
	second_a = ft_atoi((*a)->content);
	*a = ft_lstlast(*a);
	last_a = ft_atoi((*a)->content);
	*a = a_cpy;
	if (first_a < second_a && first_a < last_a)
		return (write(1, "pa\n", 3), push(a, b)); 
	if (first_a > second_a && first_a < last_a)
		return (write(1, "sa\n", 3), swap(a));
	if (first_a > second_a && first_a > last_a)
		return (write(1, "ra\n", 3), rotate(a));
	if (first_a < second_a && first_a > last_a)
		return (write(1, "rra\n", 4), reverse(a));
	return (*a);	
}

t_list	*get_three_sort(t_list **a, t_list **b)
{
	int	a_len;
	int	i;

	i= 0;
	if (a == NULL)
		return (NULL);
	a_len = ft_lstlen(*a);
	while (check_sorting(a, a_len) != 1)
	{
		get_little_sort_a(a, b);
		if (*b)
			get_little_sort_b(b, a);
			i++;
	}
	return (*a);
}