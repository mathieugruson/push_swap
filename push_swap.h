/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:30:57 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/15 19:23:29 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

int     check_duplicate(char **argv);
int     check_int_limit(char **argv);
int     check_int_type(char **argv, int argc);
int     check_errors(char **argv, int argc);
int     check_sorting(t_list **lst, int	lst_len);
t_list  *create_list(t_list **lst, char **argv, int argc);
int     get_cost_move_b(t_list *b, int	b_len);
int     is_the_bigger(t_list *a, t_list *b);
int     get_cost_move_a(t_list *a, t_list *b, int a_len, int b_len);
void    get_cost_move(t_list **a, t_list **b);
void    get_current_pos(t_list *a, t_list *b);
int     get_final_pos(t_list **lst, char **argv);
int     highest_value_exist_in(t_list *a, t_list *b);
t_list  *lowest_value_of(t_list *a);
int     nearest_value_higher_of(t_list *a, t_list *b);
int     target_pos_index(t_list *a, t_list *b);
void    get_target_pos(t_list **a, t_list **b);
int     no_sign(int   nbr);
t_list  *find_cheapest_element(t_list **b);
void    double_move_to_do(t_list **a, t_list **b, t_list *cheapest_node);
void    simple_move_to_do(t_list **a, t_list **b, t_list *cheapest_node);
void    move_cheapest_element(t_list **a, t_list **b);
void	pa(t_list **src, t_list **dst);
void	pb(t_list **src, t_list **dst);
t_list	*push(t_list **src, t_list **dst);
void	rra(t_list **lst);
void	rrb(t_list **lst);
void	rrr(t_list **a, t_list **b);
t_list	*reverse(t_list **lst);
void	ra(t_list **lst);
void	rb(t_list **lst);
void	rr(t_list **a, t_list **b);
t_list	*rotate(t_list **lst);
void    empty_unless_three(t_list **a, t_list **b);
void    sort_after_three(t_list **a, t_list **b);
void    sort_list(t_list **a, t_list **b);
void	sort_up_to_three(t_list **lst);
void	sa(t_list **lst);
void	sb(t_list **lst);
void	ss(t_list **a, t_list **b);
t_list	*swap(t_list **lst);

#endif 