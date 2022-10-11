/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:31:12 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/12 18:31:12 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//yazdırılabilir karakterlerin kontrolu.
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}