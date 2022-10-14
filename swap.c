/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:41:47 by mgruson           #+#    #+#             */
/*   Updated: 2022/09/07 19:50:18 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*swap(t_list **lst)
{
	t_list	*second;
	t_list	*third;

	second = (*lst)->next; // obtenir l'adresse du second element;
	third = second->next; // obtenir l'adresse du troisieme element
	
	(*lst)->next = third; // donner l'adresse du troisieme element pour qu'il devienne le second
	second->next =  *lst; // donner l'adresse du premier element qui est devenu second pour qu'il devienne premier;
	
	*lst = second; // donner l'adresse du second pour qu'il devienne premier;
	update_current_positions(*lst, NULL);
	return (second);
}
