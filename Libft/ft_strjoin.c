/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:31:36 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/12 18:31:36 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//girilen iki diziyi birlestirir.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*m;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	m = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	if (!m)
		return (NULL);
	while (s1[i])
	{
		m[i] = s1[i];
		i++;
	}
	while (s2[j])
		m[i++] = s2[j++];
	m[i] = '\0';
	return (m);
}

/* int	main(void)
{
	char	a[] = "yunus";
	char	b[] = "emre";
	printf("%s", ft_strjoin(a, b));
} */
