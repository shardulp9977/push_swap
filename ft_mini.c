/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:57:34 by spawar            #+#    #+#             */
/*   Updated: 2024/05/31 17:34:08 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	mini(t_node **a)
{
	if (((*a)->data == 2) && ((*a)->next->data == 1))
		swap_a(*a);
	else if (((*a)->data == 2) && ((*a)->next->data == 3))
		revrotatea(a);
	else if (((*a)->data == 3) && ((*a)->next->data == 2))
	{
		swap_a(*a);
		revrotatea(a);
	}
	else if (((*a)->data == 3) && ((*a)->next->data == 1))
		rotatea(a);
	else if (((*a)->data == 1) && ((*a)->next->data == 3))
	{
		swap_a(*a);
		rotatea(a);
	}
}

void	mini5(t_node **a, t_node **b)
{
	while (ft_size(*a) > 3)
	{
		if ((*a)->data == 4 || (*a)->data == 5)
			push_b(a, b);
		else
			rotatea(a);
	}
	mini(a);
	push_a(a, b);
	if ((*a)->data == 4 && (*b) != NULL)
	{
		rotatea(a);
		push_a(a, b);
		rotatea(a);
	}
	else if ((*a)->data == 4 && (*b) == NULL)
		rotatea(a);
	else if ((*a)->data == 5)
	{
		push_a(a, b);
		rotatea(a);
		rotatea(a);
	}
}
