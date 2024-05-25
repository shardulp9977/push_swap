/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:50:09 by spawar            #+#    #+#             */
/*   Updated: 2024/05/25 16:55:29 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	push_b(t_node *a, t_node **b)
{
	t_node	*current;

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

int	push_a(t_node **a, t_node **b)
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

int	rotatea(t_node **a)
{
	t_node	*first_node;
	t_node	*last_node;

	first_node = *a;
	last_node = *a;
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = first_node;
	*a = first_node->next;
	first_node->next = NULL;
	return (0);
}

int	rotateb(t_node **b)
{
	t_node	*first_node;
	t_node	*last_node;

	first_node = *b;
	last_node = *b;
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = first_node;
	*b = first_node->next;
	first_node->next = NULL;
	return (0);
}

int	revrotatea(t_node **a)
{
	t_node	*temp;
	t_node	*current;

	temp = *a;
	current = NULL;
	while (temp->next != NULL)
	{
		current = temp;
		temp = temp->next;
	}
	current->next = NULL;
	temp->next = *a;
	*a = temp;
	return (0);
}

int	revrotateb(t_node **b)
{
	t_node	*temp;
	t_node	*current;

	temp = *b;
	current = NULL;
	while (temp->next != NULL)
	{
		current = temp;
		temp = temp->next;
	}
	current->next = NULL;
	temp->next = *b;
	*b = temp;
	return (0);
}

int	ss(t_node *a, t_node *b)
{
	swap_a(a);
	swap_b(b);
	return (0);
}

int rr(t_node **a, t_node **b)
{
	rotatea(a);
	rotateb(b);
	return (0);
}

int rrr(t_node **a, t_node **b)
{
	revrotatea(a);
	revrotateb(b);
	return (0);
}