/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:50:09 by spawar            #+#    #+#             */
/*   Updated: 2024/05/31 16:32:58 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	push_b(t_node **a, t_node **b)
{
	t_node	*temp1;
	t_node	*temp2;

	if (*a != NULL)
	{
		temp1 = *a;
		temp2 = *b;
		*b = temp1;
		*a = temp1->next;
		temp1 ->next = temp2;
	}
	write(1, "pb\n", 3);
	return (0);
}

int	push_a(t_node **a, t_node **b)
{
	t_node	*temp1;
	t_node	*temp2;

	if (*b != NULL)
	{
		temp1 = *b;
		temp2 = *a;
		*a = temp1;
		*b = temp1->next;
		temp1 ->next = temp2;
	}
	write(1, "pa\n", 3);
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
	write(1, "sa\n", 3);
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
