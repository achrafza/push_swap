/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:11:35 by azahid            #+#    #+#             */
/*   Updated: 2025/03/03 20:15:00 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_stack(t_stack *stack)
{
	t_stack	*node;
	int		index;
	t_stack	*smallest;

	index = 0;
	while (index < stack_size(stack))
	{
		node = stack;
		smallest = NULL;
		while (node)
		{
			if (node->index == -1 && (!smallest
					|| node->value < smallest->value))
				smallest = node;
			node = node->next;
		}
		if (smallest)
			smallest->index = index++;
	}
}

void	add_index(t_stack *stack)
{
	t_stack	*current;
	int		index;

	current = stack;
	index = 0;
	while (current)
	{
		current->index = index;
		index++;
		current = current->next;
	}
}
