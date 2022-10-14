/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:26:03 by mathieug          #+#    #+#             */
/*   Updated: 2022/10/14 19:32:26 by mathieug         ###   ########.fr       */
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
		new->cost_a = 0;
		new->cost_b = 0;
		new->target_pos = 0;
	}
	return (new);
}
