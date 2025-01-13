/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:16:31 by spawar            #+#    #+#             */
/*   Updated: 2024/03/14 16:23:52 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstl;
	size_t	srcl;
	size_t	dstend;

	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	dstend = dstl;
	if (dstsize <= dstl)
		return (dstsize + srcl);
	while (*src != '\0' && dstend < dstsize - 1)
	{
		dst[dstend] = *src;
		dstend++;
		src++;
	}
	dst[dstend] = '\0';
	return (dstl + srcl);
}
