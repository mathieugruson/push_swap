/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_up_to_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:41:56 by mathieug          #+#    #+#             */
/*   Updated: 2022/10/14 19:58:09 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_up_to_three(t_list **lst)
{
	int	lstlen;

	lstlen = ft_lstlen(*lst);
	if (lstlen == 2)
		sa(lst);
	while (check_sorting(lst, lstlen) == 0)
	{
		if ((*lst)->final_pos > (*lst)->next->final_pos)
			sa(lst);
		else if ((*lst)->next->final_pos > (*lst)->final_pos)
			rra(lst);
	}
}