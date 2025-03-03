/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:12:07 by azahid            #+#    #+#             */
/*   Updated: 2025/03/03 20:16:44 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;
	t_stack	*second_to_last;

	tmp = *stack;
	last = *stack;
	second_to_last = *stack;
	while (last->next)
	{
		second_to_last = last;
		last = last->next;
	}
	second_to_last->next = NULL;
	last->next = tmp;
	*stack = last;
}

void	rra(t_stack **stack_a)
{
	if (stack_size(*stack_a) <= 1)
		return ;
	reverse_rotate(stack_a);
	write (1, "rra\n", 4);
}

void	rrb(t_stack **stack_b)
{
	if (stack_size(*stack_b) <= 1)
		return ;
	reverse_rotate(stack_b);
	write (1, "rrb\n", 4);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_size(*stack_a) <= 1 || stack_size(*stack_b) <= 1)
		return ;
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write (1, "rrr\n", 4);
}
