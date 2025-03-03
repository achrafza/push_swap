/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:12:04 by azahid            #+#    #+#             */
/*   Updated: 2025/03/03 20:16:48 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_range(t_stack **stack_a)
{
	int	size;

	size = stack_size(*stack_a);
	if (size > 100)
		return (32);
	else
		return (11);
}

int	protect(t_stack **stack_a)
{
	int		i;
	int		j;
	t_stack	*head;

	i = 0;
	j = 0;
	head = *stack_a;
	while (j < stack_size(*stack_a) / 2)
	{
		if (head->value > head->next->value)
			i++;
		j++;
		head = head->next;
	}
	return (i);
}

void	init_push_b(t_stack **stack_a, int *index, int *range, int *test)
{
	*index = 0;
	*test = protect(stack_a) > (stack_size(*stack_a)) / 3;
	*range = ft_range(stack_a);
}

void	push_to_b(t_stack **stack_a, t_stack **stack_b)
{
	int		index;
	int		range;
	t_stack	*head;
	int		test;

	init_push_b(stack_a, &index, &range, &test);
	while (*stack_a)
	{
		head = *stack_a;
		if (head->index <= index)
		{
			pb(stack_a, stack_b);
			index++;
		}
		else if (head->index <= (index + range))
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			index++;
		}
		else if (test)
			rra(stack_a);
		else
			ra(stack_a);
	}
}
