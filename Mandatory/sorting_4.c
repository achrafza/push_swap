/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:12:20 by azahid            #+#    #+#             */
/*   Updated: 2025/03/03 20:16:32 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_index(t_stack *stack)
{
	int	min;
	int	index;
	int	min_index;

	min = stack->value;
	index = 0;
	min_index = 0;
	while (stack)
	{
		if (stack->value < min)
		{
			min = stack->value;
			min_index = index;
		}
		stack = stack->next;
		index++;
	}
	return (min_index);
}

int	sorting_4(t_stack **stack_a, t_stack **stack_b)
{
	int	min_index;

	min_index = find_min_index(*stack_a);
	if (min_index == 1)
		sa(stack_a);
	else if (min_index == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min_index == 3)
		rra(stack_a);
	pb(stack_a, stack_b);
	sorting_3(stack_a);
	pa(stack_a, stack_b);
	return (0);
}
