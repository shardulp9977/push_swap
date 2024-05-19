/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:55:30 by spawar            #+#    #+#             */
/*   Updated: 2024/03/17 17:54:38 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*thebig1;

	thebig1 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (thebig1 == NULL || !s1 || !s2)
		return (NULL);
	ft_memcpy(thebig1, s1, ft_strlen(s1) + 1);
	ft_strlcat(thebig1, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (thebig1);
}
