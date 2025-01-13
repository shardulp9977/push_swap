/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:54:51 by spawar            #+#    #+#             */
/*   Updated: 2024/03/18 20:09:55 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*t;

	i = 0;
	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	t = malloc(len + 1);
	if (t == NULL)
		return (NULL);
	while (i < len)
	{
		*(t + i) = f(i, *(s + i));
		i++;
	}
	*(t + i) = '\0';
	return (t);
}
