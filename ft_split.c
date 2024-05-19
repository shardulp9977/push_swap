/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:14:10 by spawar            #+#    #+#             */
/*   Updated: 2024/03/19 18:22:30 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct s_myStructure
{
	int		start;
	int		end;
	int		index;
	int		num;
	char	**temp;
};

static int	words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (*(s + i))
	{
		while (*(s + i) && *(s + i) == c)
			i++;
		if (*(s + i))
		{
			while (*(s + i) && *(s + i) != c)
				i++;
			words++;
		}
	}
	return (words);
}

static void	mrclean(char **s)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		free(*(s + i));
		i++;
	}
	free(s);
}

static char	**backbreaker(char const *s, char c, struct s_myStructure s1)
{
	while (*(s + s1.end))
	{
		while (*(s + s1.end) && *(s + s1.end) == c)
			s1.end++;
		s1.start = s1.end;
		if (*(s + s1.end))
		{
			while (*(s + s1.end) && *(s + s1.end) != c)
				s1.end++;
			s1.temp[s1.index] = ft_substr(s, s1.start, s1.end - s1.start);
			if (s1.temp[s1.index] == NULL)
			{
				mrclean(s1.temp);
				return (NULL);
			}
			s1.index++;
		}
	}
	s1.temp[s1.index] = NULL;
	return (s1.temp);
}

char	**ft_split(char const *s, char c)
{
	struct s_myStructure	s1;

	s1.start = 0;
	s1.end = 0;
	s1.index = 0;
	s1.num = words(s, c) + 1;
	s1.temp = (char **)malloc(s1.num * sizeof(char *));
	if (s1.temp == NULL)
		return (NULL);
	s1.temp = backbreaker(s, c, s1);
	return (s1.temp);
}
