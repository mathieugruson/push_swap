/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_final_position.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:41:51 by mgruson           #+#    #+#             */
/*   Updated: 2022/09/07 17:51:03 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_final_position(t_list **lst, char **argv)
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