/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:12:51 by mgruson           #+#    #+#             */
/*   Updated: 2022/09/08 15:11:51 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorting(t_list **lst, int	lst_len)
{
	t_list	*lst_copy;
	int		tmp;
	int		i;
	
	lst_copy = *lst;
	i = 0;
	while (*lst)
	{
		tmp = (*lst)->final_pos;
		*lst = (*lst)->next;
		if (*lst && tmp > (*lst)->final_pos)
		{
			*lst = lst_copy;	
			return (0);
		}
		i++;
	}
	if (lst_len == i)
	{
		*lst = lst_copy;	
		return (1);
	}
	*lst = lst_copy;	
	return (0);
}
