/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:12:02 by azahid            #+#    #+#             */
/*   Updated: 2025/03/03 20:16:51 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

void		free_arr(char **tmp);
int			is_valid_number(char *tmp);
int			parse_input(int ac, char **av, t_stack **a);
int			has_duplicates(long n, t_stack *a);
int			ft_isdigit(char c);
long		ft_atoi(const char *str);
char		**ft_split(char const *s, char c);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		stack_clear(t_stack **head);
int			push_back(t_stack **head, int n);
int			stack_size(t_stack *s);
int			sorting_3(t_stack **stack_a);
int			sorting_4(t_stack **stack_a, t_stack **stack_b);
int			sorting_5(t_stack **stack_a, t_stack **stack_b);
void		swap(t_stack **stack);
void		push(t_stack **dst, t_stack **src);
void		rotate(t_stack **stack);
void		reverse_rotate(t_stack **stack);
void		add_front(t_stack **head, t_stack *new);
void		push(t_stack **dst, t_stack **src);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		pa(t_stack **stack_a, t_stack **stack_b);
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);
void		rrr(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		push_to_b(t_stack **stack_a, t_stack **stack_b);
int			is_sorted(t_stack *stack);
void		index_stack(t_stack *stack);
int			find_min_index(t_stack *stack);
void		algo(t_stack **stack_a, t_stack **stack_b);
void		add_index(t_stack *stack);

#endif
