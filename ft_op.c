/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:50:09 by spawar            #+#    #+#             */
/*   Updated: 2024/05/24 15:54:23 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	push_a(t_node *a, t_node **b)
{
	struct s_node	*current;

	current = malloc(sizeof(t_node));
	current->data = a->data;
	current->next = *b;
	*b = current;
	*a = *(a)->next;
	return (0);
}

void	ft_free(t_node **b)
{
	t_node	*temp;

	temp = *b;
	*b = NULL;
	free(temp);
}

int	push_b(t_node **a, t_node **b)
{
	t_node	*current;

	if (*b != NULL)
	{
		current = malloc(sizeof(t_node));
		current->data = (*b)->data;
		current->next = *a;
		*a = current;

		if ((*b)->next != NULL)
			*b = (*b)->next;
		else
			ft_free(b);
	}
	return (0);
}

int	swap_a(t_node *a)
{
	int	temp;

	if (a && a -> next)
	{
		temp = a->data;
		a->data = a->next->data;
		a->next->data = temp;
	}
	return (0);
}

int	swap_b(t_node *b)
{
	int	temp;

	if (b && b -> next)
	{
		temp = b->data;
		b->data = b->next->data;
		b->next->data = temp;
	}
	return (0);
}