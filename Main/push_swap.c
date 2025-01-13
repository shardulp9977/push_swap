/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:18:06 by spawar            #+#    #+#             */
/*   Updated: 2024/06/10 15:04:01 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	duplicates(t_node *head)
{
	t_node	*temp;
	t_node	*temp1;
	int		count;

	temp = head;
	while (temp != NULL)
	{
		temp1 = head;
		count = 0;
		while (temp1 != NULL)
		{
			if ((temp->data - temp1->data) == 0)
				count++;
			temp1 = temp1->next;
		}
		if (count > 1)
			return (0);
		temp = temp->next;
	}
	return (1);
}

t_node	*ft_linker(char *s, t_node *head)
{
	t_node	*current;

	current = malloc(sizeof(t_node));
	current->data = ft_atoi(s);
	current->next = head;
	head = current;
	return (head);
}

t_node	*ft_checker(char **s, int argc)
{
	int		i;
	int		j;
	t_node	*head;
	char	**tmp;

	i = argc;
	head = NULL;
	while (i > 0)
	{
		if (ft_strlen(s[i]) > 1 && ft_isspace(s[i]) == 1)
		{
			tmp = ft_split(s[i], ' ');
			j = ft_dstrlen(tmp) - 1;
			while (j >= 0)
			{
				head = ft_linker(tmp[j], head);
				j--;
			}
		}
		else
			head = ft_linker(s[i], head);
		i--;
	}
	return (head);
}

int	ft_issorted(t_node *temp, t_node *temp2)
{
	while (temp->data == temp2->data && temp != NULL)
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
			temp2 = temp2->next;
		}
		else if (temp->next == NULL)
			return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	t_node	*nhead;

	if (argc < 2)
		return (0);
	if (ft_valid(argv) == 0 || ft_allspace(argv) == 0)
		return (write(2, "Error\n", 6), 0);
	ft_numchecker(argv, argc - 1);
	a = ft_checker(argv, argc - 1);
	if (duplicates(a) == 0)
		return (free_list(a), write(2, "Error\n", 6), 0);
	nhead = copy(a);
	nhead = sort_list(nhead);
	if (ft_issorted(a, nhead))
		return (free_list(a), free_list(nhead), 0);
	a = indexing(nhead, a);
	if (ft_size(a) <= 3)
		mini(&a);
	else if (ft_size(a) == 5 || ft_size(a) == 4)
		mini5(&a, &b);
	else
		ft_radish(&a, &b);
	return (free_list(a), free_list(nhead), 0);
}
