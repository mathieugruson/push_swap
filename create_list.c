/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:51:41 by mgruson           #+#    #+#             */
/*   Updated: 2022/09/07 17:50:09 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *create_list(t_list **lst, char **argv, int argc)
{
	int		argc_cpy;
	t_list	*tmp;
	
	argc_cpy = 1;
	tmp = NULL;
	
	*lst = ft_lstnew(argv[argc_cpy++]);
	find_final_position(lst, argv);
	while(argc_cpy != argc)
	{
		tmp = ft_lstnew(argv[argc_cpy]);
		find_final_position(&tmp, argv);
		ft_lstadd_back(*lst, tmp);
		argc_cpy++;
	}
	update_current_positions(*lst, NULL);
	return (*lst);
}
