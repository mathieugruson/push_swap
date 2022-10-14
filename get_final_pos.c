/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_final_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:41:51 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/14 19:17:49 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_final_pos(t_list **lst, char **argv)
{
	int	i;
	int	position;

	i = 1;
	position = 1;

	if (!lst)
		return (0);
	while(argv[i])
	{
		if (ft_atoi(argv[i]) < ft_atoi((*lst)->content))
			position++;
		i++;
	}
	(*lst)->final_pos = position;
	return (position);
}