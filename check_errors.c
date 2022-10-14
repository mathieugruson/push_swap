/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:16:51 by mgruson           #+#    #+#             */
/*   Updated: 2022/09/08 14:50:03 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(char **argv)
{
	int	i;
	int	i2;

	i = 1;
	while (argv[i])
	{
		i2 = i + 1;
		while (argv[i2])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[i2]))
				return (1);
			i2++;
		}
		i++;
	}
	return (0);
}

int	check_int_limit(char **argv)
{
	long	content;
	int		i;

	i = 1;
	while (argv[i])
	{
		content = ft_atoi(argv[i]);
		if (content < -2147483648 || content > 2147483647)
			return (1);
		i++;
	}
	return (0);
}

int	check_int_type(char **argv, int argc)
{
	int	i;
	int	i2;

	i = 1;
	i2 = 1;
	while (i < argc)
	{
		if (!argv[i][1] && (argv[i][0] < '0' || argv[i][0] > '9'))
			return (1);
		if (ft_strlen(argv[i]) > 1)
		{	
			while (argv[i][i2])
			{
				if ((argv[i][0] < '0' || argv[i][0] > '9')
				&& argv[i][0] != '-' && argv[i][0] != '+')
					return (1);
				if ((argv[i][i2] < '0' || argv[i][i2] > '9'))
					return (1);
				i2++;
			}
		}
		i2 = 1;
		i++;
	}
	return (0);
}

int	check_errors(char **argv, int argc)
{
	int	d;
	int	l;
	int	t;

	if (!argv[1])
		return (1);
	d = check_duplicate(argv);
	l = check_int_limit(argv);
	t = check_int_type(argv, argc);
	return (d + l + t);
}
