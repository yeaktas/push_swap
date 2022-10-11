/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:08:50 by aktas             #+#    #+#             */
/*   Updated: 2022/03/06 15:12:46 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//srcden deste n kadar kopyalar.
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*srce;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	srce = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = srce[i];
		i++;
	}
	return (dst);
}

/* int main()
{
	char	a[] = "bilgisayar";
	char	b[] = "emre";

	printf("%s", ft_memcpy(a, b, 3));

} */
