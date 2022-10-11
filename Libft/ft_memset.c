/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 02:11:20 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/06 15:07:30 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//s dizisini n kadar c ile doldurur. 
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	char			*j;

	i = 0;
	j = (char *)s;
	while (i < n)
	{
		j[i] = c;
		i++;
	}
	s = j;
	return (s);
}

/* int	main(void)
{
	char a[] = "yunusemre";
	char b = 'z';

	printf("%s", ft_memset(a, b , 5));
} */