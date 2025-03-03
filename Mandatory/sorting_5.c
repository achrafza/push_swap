/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:12:22 by azahid            #+#    #+#             */
/*   Updated: 2025/03/03 20:16:25 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorting_5(t_stack **stack_a, t_stack **stack_b)
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
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (min_index == 4)
		rra(stack_a);
	pb(stack_a, stack_b);
	sorting_4(stack_a, stack_b);
	pa(stack_a, stack_b);
	return (0);
}
