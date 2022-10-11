/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:40:11 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/06 16:35:11 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//bellekte belirlenen iki stringi n kadar karsilastirir.
//fark varsa farki dondurur.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*st1;
	unsigned char	*st2;

	if (n == 0)
		return (0);
	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	i = 0;
	while (i < n - 1)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
	i++;
	}
	return (st1[i] - st2[i]);
}

/*int	main(void)
{
	char	a[] = "bilgisayar";
	char	b[] = "bilgiler";
	printf("%d\n", ft_memcmp(a, b, 6));
}*/