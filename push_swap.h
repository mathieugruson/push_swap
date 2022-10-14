/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:30:57 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/14 19:46:43 by mathieug         ###   ########.fr       */
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
void    empty_up_to_three(t_list **a, t_list **b);
void    sort_after_three(t_list **a, t_list **b);
void    sort_list(t_list **a, t_list **b);
void	sort_up_to_three(t_list **lst);
void	sa(t_list **lst);
void	sb(t_list **lst);
void	ss(t_list **a, t_list **b);
t_list	*swap(t_list **lst);


#endif 