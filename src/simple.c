/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:08:54 by yaktas            #+#    #+#             */
/*   Updated: 2022/10/18 16:38:59 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_small_sort(t_list **stackA, t_list **stackB)
{
	(void)stackB;
	if (ft_lstsize(*stackA) == 2)
	{
		if ((*stackA)->content > (*stackA)->next->content)
			sa(stackA);
	}
	else if (ft_lstsize(*stackA) == 3)
		ft_sort_three(stackA);
	else if (ft_lstsize(*stackA) == 4)
		ft_sourt_four(stackA, stackB);
	else if (ft_lstsize(*stackA) == 5)
		ft_sort_five(stackA, stackB);
}
