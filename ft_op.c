/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:50:09 by spawar            #+#    #+#             */
/*   Updated: 2024/05/19 18:29:52 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	push_a(struct s_node *a, struct s_node **b)
{
	struct s_node	*current;

	current = malloc(sizeof(struct s_node));
	current->data = a->data;
	current->next = *b;
	*b = current;
	*a = *(a)->next;
	return (0);
}

void	ft_free(struct s_node **b)
{
	struct s_node	*temp;

	temp = *b;
	*b = (*b)->next;
	free(temp);
}

struct s_node	*push_b(struct s_node **a, struct s_node *b)
{
	struct s_node	*current;
	struct s_node	*temp;

	current = malloc(sizeof(struct s_node));
	current->data = b->data;
	current->next = *a;
	*a = current;
	if ((b)->next != NULL)
		*b = *(b)->next;
	else
		ft_free(&b);
	return (b);
}

int	swap_a(struct s_node *a)
{
	int	 temp;

	temp = a->data;
	a->data = a->next->data;
	a->next->data = temp;

	return (0);
}