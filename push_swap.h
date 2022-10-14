/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:30:57 by mgruson           #+#    #+#             */
/*   Updated: 2022/09/12 16:59:52 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

t_list	*swap(t_list **lst);
t_list	*push(t_list **src, t_list **dst);
t_list	*rotate(t_list **lst);
void 	doublerotate(t_list **a, t_list **b);
t_list	*reverse(t_list **lst);
void 	doublereverse(t_list **a, t_list **b);
int		check_sorting(t_list **lst, int lst_len);
int		check_duplicate(char **argv);
int		check_int_type(char **argv, int argc);
int		check_int_limit(char **argv);
int		check_errors(char **argv, int argc);
int		find_final_position(t_list **lst, char **argv);
t_list	*sort_three(t_list **lst);
t_list	*sort_more(t_list **a, t_list **b);
void	sort_list(t_list **a, t_list **b, int argc);
t_list	*create_list(t_list **lst, char **argv, int argc);
void	update_current_positions(t_list *a, t_list *b);
void 	update_costs_move(t_list **a, t_list **b);
int		get_cost_move_a(t_list *a, t_list *b, int a_len, int b_len);
int		get_cost_move_b(t_list *b, int	b_len);
void	transfer_costleast(t_list **a, t_list **b);
t_list	*find_costleast(t_list **b);
void	move_lists(t_list **a, t_list **b, t_list *b_costleast);
void	shift_until_sort(t_list **a);
void	fill_list(t_list **a, t_list **b);
t_list *find_best_sequence(t_list *a);
void empty_the_rest(t_list **a, t_list **b, t_list *start);
void pull_list(t_list **a, t_list **b);
int	is_the_bigger(t_list *a, t_list *b);


#endif 