/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:07:56 by yaktas            #+#    #+#             */
/*   Updated: 2022/10/18 16:38:59 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_push_small_a(t_list **stackA, t_list **stackB, int flag)
{
	t_list	*head;

	head = *stackA;
	while (head->next != NULL)
	{
		if (head->index == 0 && flag == 0)
		{
			pb(stackA, stackB);
			break ;
		}
		if (head->index == 1 && flag == 1)
		{
			pb(stackA, stackB);
			break ;
		}
		ra(stackA);
		head = *stackA;
	}
}
