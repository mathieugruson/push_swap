/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:32:06 by mgruson           #+#    #+#             */
/*   Updated: 2022/09/12 14:42:55 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*push(t_list **src, t_list **dst)
{	
	t_list	*tmp;
	
	if (*src == NULL)
		return (NULL); 
	tmp = (*src)->next;	
	(*src)->next = *dst;
	*dst = *src;
	*src = tmp;
	update_current_positions(*src, *dst);
	return (tmp);
}
