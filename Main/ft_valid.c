/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 14:30:44 by spawar            #+#    #+#             */
/*   Updated: 2024/06/15 15:40:17 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_valid(char **s)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (s[i] != NULL)
	{
		j = 0;
		if (s[i][0] == '\0')
			return (0);
		while (s[i][j] != '\0')
		{
			if (!((s[i][j] >= '0' && s[i][j] <= '9')
				|| s[i][j] == 32 || (s[i][j] == '-' && s[i][j + 1] != '\0') ||
					(s[i][j] == '+' && s[i][j + 1] != '\0')))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_allspace(char **s)
{
	int				i;
	int				j;
	unsigned int	count;

	i = 1;
	j = 0;
	count = 0;
	while (s[i] != NULL)
	{
		j = 0;
		while (s[i][j] != '\0')
		{
			if (s[i][j] == 32)
				count++;
			if (count == ft_strlen(s[i]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
