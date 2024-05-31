/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:48:52 by spawar            #+#    #+#             */
/*   Updated: 2024/05/31 17:39:21 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_algo(t_node **a, t_node **b)
{
	int	max_num;
	int	max_bits;
	int	i;
	int	j;

	max_num = ft_size(*a);
	max_bits = 0;
	i = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
		while (j < (max_num))
		{
			if ((((*a)->data >> i) & 1) == 1)
				rotatea(a);
			else
				push_b(a, b);
			j++;
		}
		while ((*b) != NULL)
			push_a(a, b);
		i++;
	}
}
