/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:51:41 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/14 19:09:52 by mathieug         ###   ########.fr       */
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
	get_final_pos(lst, argv);
	while(argc_cpy != argc)
	{
		tmp = ft_lstnew(argv[argc_cpy]);
		get_final_pos(&tmp, argv);
		ft_lstadd_back(*lst, tmp);
		argc_cpy++;
	}
	get_current_pos(*lst, NULL);
	return (*lst);
}
