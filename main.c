/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:06:09 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/15 20:56:14 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (check_errors(argv, argc) > 0)
		return (write(2, "Error\n", 6));
	create_list(&a, argv, argc);
	// printf("List A before sorting:\n");
	// ft_print_list(a);
	sort_list(&a, &b);
	printf("List A after sorting:\n");
	ft_print_list(a);
	// printf("List B after sorting:\n");
	// ft_print_list(b);
	ft_free_list(a);
	return (0);
}


