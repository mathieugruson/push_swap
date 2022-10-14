/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_current_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:42:31 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/14 19:11:17 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_current_pos(t_list *a, t_list *b)
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