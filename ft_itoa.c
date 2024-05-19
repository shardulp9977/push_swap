/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:13:24 by spawar            #+#    #+#             */
/*   Updated: 2024/03/19 18:22:10 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = numlen(n);
	s = malloc(len + 1);
	if (s == NULL)
		return (NULL);
	*(s + len) = '\0';
	if (n < 0)
	{
		n *= -1;
		*(s + 0) = '-';
	}
	while (n > 0)
	{
		len--;
		*(s + len) = '0' + (n % 10);
		n = n / 10;
	}
	return (s);
}
