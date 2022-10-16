/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:43:27 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/16 13:19:25 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H 

# include <string.h>
# include <strings.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <ctype.h>
# include <limits.h>

/* libc functions */

long	ft_atoi(const char *str);
size_t	ft_strlen(const char *s);

/* linked list functions */

typedef struct s_list
{
	void			*content;
	int				current_pos;
	int				final_pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list *lst, t_list *new);
int		ft_lstlen(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list *lst, t_list *new);

/* extra functions */

void	ft_print_list(t_list *lst);
void	ft_print_node(t_list *lst);
t_list	*ft_free_node(t_list *node);
void	ft_free_list(t_list *lst);

#endif 