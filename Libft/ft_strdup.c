/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:25:12 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/15 12:37:05 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//malloc ile yer acip icine str yaziyor.
char	*ft_strdup(const char *str)
{
	char	*m;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(str);
	m = (char *)malloc(j + 1);
	if (!m)
		return (0);
	while (str[i])
	{
		m[i] = str[i];
		i++;
	}
	m[i] = '\0';
	return (m);
}

/* int	main(void)
{
	char a[] = "emre";
	printf("%s", ft_strdup(a));
} */