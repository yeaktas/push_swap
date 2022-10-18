/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:08:00 by yaktas            #+#    #+#             */
/*   Updated: 2022/10/18 16:38:59 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sort_five(t_list **stackA, t_list **stackB)
{
	t_list	*end;
	int	flag;

	end = ft_lstlast(*stackA);
	if (end->index == 0)
	{
		rra(stackA);
		pb(stackA, stackB);
	}
	else
	{
		flag = 0;
		ft_push_small_a(stackA, stackB, flag);
		
	}
	flag = 1;
	ft_push_small_a(stackA, stackB, flag);
	ft_sort_three(stackA);
	pa(stackA, stackB);
	pa(stackA, stackB);
}
