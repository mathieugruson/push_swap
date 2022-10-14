/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:38:46 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/14 19:33:29 by mathieug         ###   ########.fr       */
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
	printf("content : %s, final_pos : %d, current_post : %d\n", (char *)(lst->content), lst->final_pos, lst->current_pos);
}
