/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:38:46 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/15 12:33:54 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_node(t_list *lst)
{
	// int		len;

	// len = 0;
	// while (((char *)lst->content)[len])
	// 	len++;
	// write(1, lst->content, len);
	// write(1, "\n", 1);
	printf("content : %s, final_pos : %d, current_post : %d, cost_a %d, cost_b %d, target_pos %d\n", (char *)(lst->content), lst->final_pos, lst->current_pos, lst->cost_a, lst->cost_b, lst->target_pos);
}
