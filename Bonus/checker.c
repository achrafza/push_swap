/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:13:13 by azahid            #+#    #+#             */
/*   Updated: 2025/03/03 20:16:07 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	free_moves(t_move **moves)
{
	t_move	*tmp;

	while (*moves)
	{
		tmp = (*moves)->next;
		free((*moves)->move);
		free(*moves);
		*moves = tmp;
	}
}

void	apply_stored_moves(t_stack **stack_a, t_stack **stack_b, t_move *moves)
{
	while (moves)
	{
		if (!apply_move(stack_a, stack_b, moves->move))
		{
			write (1, "Error\n", 6);
			exit(1);
		}
		moves = moves->next;
	}
}

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

void	execute_moves(t_stack **stack_a, t_stack **stack_b, t_move **moves)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (!check_move(stack_a, stack_b, line))
		{
			free(line);
			free_moves(moves);
			stack_clear(stack_a);
			stack_clear(stack_b);
			write(1, "Error\n", 6);
			get_next_line(-1);
			exit(1);
		}
		add_move(moves, line);
		free(line);
		line = get_next_line(0);
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_move	*moves;

	stack_a = NULL;
	stack_b = NULL;
	moves = NULL;
	if (ac >= 2)
	{
		parse_input(ac, av, &stack_a);
		execute_moves(&stack_a, &stack_b, &moves);
		apply_stored_moves(&stack_a, &stack_b, moves);
		if (is_sorted(stack_a) && (stack_b == NULL))
			write (1, "OK\n", 3);
		else
			write (1, "KO\n", 3);
	}
	stack_clear(&stack_a);
	stack_clear(&stack_b);
	free_moves(&moves);
	return (0);
}
