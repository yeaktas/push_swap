/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 02:24:34 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/02 02:32:12 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//s disini n kadar null doldurur.
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* int	main(void)
{
	char a[] = "yunusemre";

	printf("%s", ft_bzero(a, 4));
} */