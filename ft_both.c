/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_both.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 14:25:18 by spawar            #+#    #+#             */
/*   Updated: 2024/05/26 14:30:28 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ss(t_node *a, t_node *b)
{
	swap_a(a);
	swap_b(b);
	return (0);
}

int	rr(t_node **a, t_node **b)
{
	rotatea(a);
	rotateb(b);
	return (0);
}

int	rrr(t_node **a, t_node **b)
{
	revrotatea(a);
	revrotateb(b);
	return (0);
}

int	ft_dstrlen(char **s)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
		i++;
	return (i);
}

int	ft_isspace(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == 32)
			return (1);
		i++;
	}
	return (0);
}
