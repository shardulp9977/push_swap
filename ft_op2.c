/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 14:23:08 by spawar            #+#    #+#             */
/*   Updated: 2024/05/31 17:22:11 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	write(1, "ra\n", 3);
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
	write(1, "rra\n", 4);
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
