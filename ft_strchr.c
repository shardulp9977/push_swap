/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:14:08 by spawar            #+#    #+#             */
/*   Updated: 2024/03/15 13:48:05 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	i = 0;
	cc = (char)c;
	while (*(s + i))
	{
		if (*(s + i) == cc)
			return ((char *)(s + i));
		i++;
	}
	if (*(s + i) == cc)
		return ((char *)(s + i));
	return (NULL);
}
