/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:13:05 by azahid            #+#    #+#             */
/*   Updated: 2025/03/03 20:16:10 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	add_move(t_move **moves, char *move)
{
	t_move	*new;
	t_move	*tmp;

	new = malloc(sizeof(t_move));
	if (!new)
		return ;
	new->move = ft_strdup(move);
	new->next = NULL;
	if (!(*moves))
		*moves = new;
	else
	{
		tmp = *moves;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

int	apply_move(t_stack **a, t_stack **b, char *move)
{
	if (!ft_strcmp(move, "sa\n"))
		sa(a);
	else if (!ft_strcmp(move, "sb\n"))
		sb(b);
	else if (!ft_strcmp(move, "ss\n"))
		ss(a, b);
	else if (!ft_strcmp(move, "pa\n"))
		pa(a, b);
	else if (!ft_strcmp(move, "pb\n"))
		pb(a, b);
	else if (!ft_strcmp(move, "ra\n"))
		ra(a);
	else if (!ft_strcmp(move, "rb\n"))
		rb(b);
	else if (!ft_strcmp(move, "rr\n"))
		rr(a, b);
	else if (!ft_strcmp(move, "rra\n"))
		rra(a);
	else if (!ft_strcmp(move, "rrb\n"))
		rrb(b);
	else if (!ft_strcmp(move, "rrr\n"))
		rrr(a, b);
	else
		return (0);
	return (1);
}

int	check_move(t_stack **a, t_stack **b, char *move)
{
	(void)*a;
	(void)*b;
	if ((!ft_strcmp(move, "sa\n"))
		|| (!ft_strcmp(move, "sb\n"))
		|| (!ft_strcmp(move, "ss\n"))
		|| (!ft_strcmp(move, "pa\n"))
		|| (!ft_strcmp(move, "pb\n"))
		|| (!ft_strcmp(move, "ra\n"))
		|| (!ft_strcmp(move, "rb\n"))
		|| (!ft_strcmp(move, "rr\n"))
		|| (!ft_strcmp(move, "rra\n"))
		|| (!ft_strcmp(move, "rrb\n"))
		|| (!ft_strcmp(move, "rrr\n")))
		return (1);
	return (0);
}
