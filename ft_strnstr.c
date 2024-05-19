/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:48:55 by spawar            #+#    #+#             */
/*   Updated: 2024/03/15 15:31:01 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = ft_strlen(needle);
	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while ((*(haystack + i) != '\0') && ((i + k) <= len))
	{
		while (*(haystack + i + j) == *(needle + j) && *(needle + j) != '\0'
			&& (i + j) < len)
		{
			if (*(needle + j + 1) == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
