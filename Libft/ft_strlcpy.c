/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:21:59 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/06 15:24:11 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//sourcedan destinationa n-1 kadar kopyalar. sourceun uzunlugunu return eder.
size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] && i < (n - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

/* int	main(void)
{
	char 	a[] = "yunus";
	char	b[] = "emre";

	printf("%zu", ft_strlcpy(a, b, 4));
} */
