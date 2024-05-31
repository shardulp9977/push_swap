/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algohelpers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:24:15 by spawar            #+#    #+#             */
/*   Updated: 2024/05/31 15:55:31 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*copy(t_node *s)
{
	t_node	*nhead;
	t_node	*p;

	nhead = malloc(sizeof(t_node));
	nhead->data = s->data;
	p = nhead;
	s = s->next;
	while (s != NULL)
	{
		p->next = malloc(sizeof(t_node));
		p = p->next;
		p->data = s->data;
		s = s->next;
	}
	p->next = NULL;
	return (nhead);
}

t_node	*sort_list(t_node *lst)
{
	int		swap;
	t_node	*tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if (lst->data > lst->next->data)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

t_node	*indexing(t_node *s1, t_node *s2)
{
	int		i;
	t_node	*tmp;
	t_node	*tmp2;

	i = 1;
	tmp = s1;
	tmp2 = s2;
	while (s2 != NULL)
	{
		i = 1;
		while (s1 != NULL)
		{
			if (s1 ->data == s2 ->data)
			{
				s2 ->data = (i);
				break ;
			}
			i++;
			s1 = s1 ->next;
		}
		s1 = tmp;
		s2 = s2 ->next;
	}
	s2 = tmp2;
	return (s2);
}

int	ft_size(t_node *s)
{
	int	i;

	i = 1;
	while (s ->next != NULL)
	{
		i++;
		s = s ->next;
	}
	return (i);
}
