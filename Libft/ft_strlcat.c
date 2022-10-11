/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:53:58 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/06 15:38:21 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//destin sonuna srcyi ekler(dstsize - dlen - 1)
//return olarak, dest ve src uzunlugu toplanir dondurulur.
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	j = dlen;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] && i < size - dlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}

/* int	main(void) 
{
	char d[] = "yunus";
	char s[] = "emre";

	printf("%zu", ft_strlcat(d, s, 4));
} */