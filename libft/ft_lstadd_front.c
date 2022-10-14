/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:13:50 by mathieug          #+#    #+#             */
/*   Updated: 2022/09/05 14:40:23 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list *lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	tmp = lst;
	if (!tmp)
	{
		lst = new;
		return ;
	}
	new->next = tmp;
}
