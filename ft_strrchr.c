/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:17:07 by spawar            #+#    #+#             */
/*   Updated: 2024/03/15 13:34:46 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cc;
	char	*j;

	i = 0;
	j = 0;
	cc = (char)c;
	while (*(s + i))
	{
		if (*(s + i) == cc)
			j = ((char *)(s + i));
		i++;
	}
	if (*(s + i) == cc)
		return ((char *)(s + i));
	return (j);
}