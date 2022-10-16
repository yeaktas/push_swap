/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:58:41 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/05 16:03:12 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
//char olarak girilen diziyi inte cevirir.
int	ft_atoi(const char *str)
{
	long int	res;
	int			a;

	a = 1;
	res = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			a *= -1;
	str++;
	}
	while (*str != 0 && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0') * a;
		if (res > 2147483647)
			return (-1);
		if (res < -2147483648)
			return (0);
		str++;
	}
	return (res);
}

/* int	main(void)
{
	char	a[] = "   	-1234";

	printf("%d", ft_atoi(a));
} */