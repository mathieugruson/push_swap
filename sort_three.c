/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:33:00 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/16 16:33:40 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **lst)
{
	int	lstlen;

	lstlen = ft_lstlen(*lst);
	while (check_sorting(lst, lstlen) == 0)
	{
		if ((*lst)->final_pos > (*lst)->next->final_pos)
			sa(lst);
		else if ((*lst)->next->final_pos > (*lst)->final_pos)
			rra(lst);
	}
}
