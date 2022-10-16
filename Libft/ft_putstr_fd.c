/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 23:53:49 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/12 23:53:49 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
//stringi fdnin icine yazar.
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		write(fd, "(NULL)", 6);
	else
		write(fd, s, ft_strlen(s));
}
