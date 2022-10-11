/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 01:48:33 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/06 16:41:39 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//s2 yi s1 de arar ve buldugunda devamini return eder.
char	*ft_strnstr(const char *s1, const char *s2, size_t	n)
{
	size_t	i;
	size_t	j;
	size_t	s2len;

	i = 0;
	s2len = ft_strlen(s2);
	if (!s2len)
		return ((char *)s1);
	if (n != 0)
	{
		while (s1[i] && i <= n - s2len)
		{
			j = 0;
			while (s2[j] && s2[j] == s1[i + j])
				j++;
			if (j == s2len)
				return ((char *)&s1[i]);
			i++;
		}
	}
	return (NULL);
}

/* int	main(void)
{
	char a[] = "merhabadunya sdfds";
	char b[] = "ba";

	printf("%s", ft_strnstr(a, b, 7));
} */