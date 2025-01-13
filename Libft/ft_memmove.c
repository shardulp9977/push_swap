/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:11:26 by spawar            #+#    #+#             */
/*   Updated: 2024/03/16 16:07:12 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	if (dst <= src)
	{
		while (i < len)
		{
			*((unsigned char *)(dst + i)) = *((const char *)(src + i));
			i++;
		}
	}
	else if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			*((unsigned char *)(dst + i)) = *((const char *)(src + i));
		}
	}
	return (dst);
}
