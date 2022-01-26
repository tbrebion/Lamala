/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:21:03 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/26 15:49:15 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<stdlib.h>
# include<unistd.h>
# include"ft_printf/ft_printf.h"
# include<limits.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstadd_back(t_list **alst, t_list *new);
t_list	*ft_lstlast(t_list *lst);

void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

t_list	**fill_stack(t_list **stack_a, int ac, char **av);
void	print_stack(t_list *stack_a, t_list *stack_b);
void	sort_small_stack(t_list **stack_a, t_list **stack_b);
void	sort_big_stack(t_list **stack_a, t_list **stack_b);

int		check_int(char **av);
int		check_double(char **av);
int		check_digit(char **av);
long	ft_atoi(char *str);
int		check_order(t_list **stack_a);
int		return_smallest(t_list **stack_a);
void	stack_2(t_list **stack_a);
void	stack_3(t_list **stack_a);
void	stack_4(t_list **stack_a, t_list **stack_b);
void	stack_5(t_list **stack_a, t_list **stack_b);
void	algo(t_list **stack_a, t_list **stack_b);

int	count_char(char const *str, char c);
void	malloc_error(char **tab, int len);
char	*new_strdup(char const *str, char c);
void	for_my_split(char **res, char const *s, char c, int len);
char	**ft_split(char const *s, char c);

#endif
