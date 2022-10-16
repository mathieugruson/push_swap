/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:06:09 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/16 14:01:11 by mgruson          ###   ########.fr       */
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
	sort_list(&a, &b);
	ft_free_list(a);
	return (0);
}
