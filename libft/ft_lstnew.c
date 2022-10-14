/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:26:03 by mathieug          #+#    #+#             */
/*   Updated: 2022/09/08 12:07:01 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new)
	{
		new->content = (char *)content;
		new->next = NULL;
		new->final_pos = 0;
		new->current_pos = 0;
		new->cost_move = 0;
		new->name_move_a = '\0';
		new->nbr_move_a = 0;
		new->name_move_b = '\0';
		new->nbr_move_b = 0;
	}
	return (new);
}
