/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:32:00 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/12 18:32:00 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//girilen dizi starttan len e kadar yazdirilir.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;
	size_t	l;

	a = (char *)malloc(len + 1);
	if (!s || !a)
		return (0);
	i = start;
	l = 0;
	while (i < ft_strlen(s) && l < len)
		a[l++] = s[i++];
	a[l] = '\0';
	return (a);
}
	/* int main(void)
	{
		char a[] = "giresun";
		printf("%s", ft_substr(a, 3, 3));
	}*/