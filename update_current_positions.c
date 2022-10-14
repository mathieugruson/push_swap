/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_current_positions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:42:31 by mgruson           #+#    #+#             */
/*   Updated: 2022/09/07 17:50:43 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	update_current_positions(t_list *a, t_list *b)
{
	int	i;

	i = 1;
	while(a)
	{
		a->current_pos = i;
		a = a->next;
		i++;
	}
	i = 1;
	while(b)
	{
		b->current_pos = i;
		b = b->next;
		i++;
	}
}