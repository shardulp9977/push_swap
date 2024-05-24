/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:18:06 by spawar            #+#    #+#             */
/*   Updated: 2024/05/24 18:45:34 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

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

int	ft_isspace(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == 32)
			return (1);
		i++;
	}
	return (0);
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
			j = 0;
			tmp = ft_split(s[i], ' ');
			while (tmp[j] != NULL)
				j++;
			j = j - 1;
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

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int				i;
	int				j;

	i = 1;
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == 32))
				return (printf("Error"), 0);
			j++;
		}
		i++;
	}
	a = ft_checker(argv, argc - 1);
	if (duplicates(a) == 0)
		return (printf("error"), 0);
	if (argc == 1)
		return (printf("Error"), 0);
	//========TESTING============//
	push_a(a, &b);
	push_a(a, &b);
	//swap_b(b);
	//push_b(&a, &b);
	//b = push_b(&a, b);
	//push_a(a, &b);
	//rotatea(&a);
	//rotatea(b);
	//revrotateb(&b);
	rr(a, b);
	printf("a:\t");
	while (a != NULL)
	{
		printf("%i\t", a->data);
		a = a->next;
	}
	printf("\nb:\t");
	while (b != NULL)
	{
		printf("%i\t", b->data);
		b = b->next;
	}
	//=======TESTING=========//
	printf("\n");
	return (0);
}
