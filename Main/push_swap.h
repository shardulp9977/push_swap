/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spawar <spawar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 12:38:06 by spawar            #+#    #+#             */
/*   Updated: 2024/06/10 15:04:37 by spawar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../Libft/libft.h"

typedef struct s_node{
	int				data;
	struct s_node	*next;
}	t_node;

int		push_b(t_node **a, t_node **b);
int		push_a(t_node **a, t_node **b);
int		swap_a(t_node *a);
int		swap_b(t_node *b);
int		rotatea(t_node **a);
int		rotateb(t_node **b);
int		revrotatea(t_node **a);
int		revrotateb(t_node **b);
int		ss(t_node *a, t_node *b);
int		rr(t_node **a, t_node **b);
int		rrr(t_node **a, t_node **b);
int		ft_dstrlen(char **s);
int		ft_isspace(char *s);
int		ft_valid(char **s);
t_node	*copy(t_node *s);
t_node	*sort_list(t_node *lst);
t_node	*indexing(t_node *s1, t_node *s2);
int		ft_size(t_node *s);
void	ft_radish(t_node **a, t_node **b);
void	mini(t_node **a);
void	mini5(t_node **a, t_node **b);
void	free_list(t_node *head);
void	ft_numchecker(char **s, int argc);
int		ft_allspace(char **s);

#endif