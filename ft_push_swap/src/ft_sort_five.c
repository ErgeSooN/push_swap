/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:37:33 by ayaman            #+#    #+#             */
/*   Updated: 2022/12/14 15:27:07 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	t_list	*end;
	int		flag;

	end = ft_lstlast(*stack_a);
	if (end->index == 0)
	{
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	else
	{
		flag = 0;
		ft_push_small_a(stack_a, stack_b, flag);
	}
	flag = 1;
	ft_push_small_a(stack_a, stack_b, flag);
	ft_sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
