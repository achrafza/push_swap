/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:11:45 by azahid            #+#    #+#             */
/*   Updated: 2025/03/03 20:16:57 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_stack	*current;

	current = stack;
	while (current && current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac >= 2)
	{
		parse_input(ac, av, &stack_a);
		index_stack(stack_a);
		if (is_sorted(stack_a))
			return (stack_clear(&stack_a), 0);
		if (stack_size(stack_a) == 2)
			sa(&stack_a);
		else if (stack_size(stack_a) == 3)
			sorting_3(&stack_a);
		else if (stack_size(stack_a) == 4)
			sorting_4(&stack_a, &stack_b);
		else if (stack_size(stack_a) == 5)
			sorting_5(&stack_a, &stack_b);
		else
			algo(&stack_a, &stack_b);
	}
	stack_clear(&stack_a);
}
