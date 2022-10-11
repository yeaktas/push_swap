/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:51:42 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/09 12:57:05 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//bellekte bos bir alan acar.
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*mem;

	mem = malloc(size * nmemb);
	if (!mem)
		return (0);
	ft_bzero(mem, (size * nmemb));
	return (mem);
}
