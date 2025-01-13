/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:50:52 by spawar            #+#    #+#             */
/*   Updated: 2024/06/09 18:08:37 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	neg;

	i = 0;
	num = 0;
	neg = 1;
	while (*(str + i) != '\0' && ((*(str + i) > 8 && *(str + i) < 14)
			|| (*(str + i) == 32)))
		i++;
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			neg = -1;
		i++;
	}
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		num = (num * 10) + *(str + i) - '0';
		i++;
		ft_validnum(num, str[i], neg);
	}
	ft_validatoi(str[i]);
	return (num * neg);
}

void	ft_validatoi(char c)
{
	if (c != '\0' && !(c >= '0' && c <= '9'))
	{
		write(2, "Error\n", 6);
		exit (0);
	}
}

void	ft_validnum(int n, char c, int neg)
{
	if (n > 214748364 && (c >= '0' && c <= '9'))
	{
		write(2, "Error\n", 6);
		exit (0);
	}
	else if (n == 214748364 && neg == 1 && (c >= '8' && c <= '9'))
	{
		write(2, "Error\n", 6);
		exit (0);
	}
	else if (n == 214748364 && neg == -1 && (c == '9'))
	{
		write(2, "Error\n", 6);
		exit (0);
	}
}
