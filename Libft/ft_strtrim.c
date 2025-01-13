/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:56:47 by spawar            #+#    #+#             */
/*   Updated: 2024/03/17 19:17:10 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*shiny;

	i = 0;
	j = ft_strlen(s1);
	while (*(s1 + i) && ft_strchr(set, *(s1 + i)))
		i++;
	while (j - 1 > i && ft_strchr(set, *(s1 + j - 1)))
		j--;
	shiny = malloc(j - i + 1);
	if (shiny == NULL)
		return (NULL);
	ft_strlcpy(shiny, s1 + i, j - i + 1);
	return (shiny);
}
