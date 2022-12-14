/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_final_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:41:51 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/16 14:11:15 by mgruson          ###   ########.fr       */
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
	while (argv[i])
	{
		if (ft_atoi(argv[i]) < ft_atoi((*lst)->content))
			position++;
		i++;
	}
	(*lst)->final_pos = position;
	return (position);
}
