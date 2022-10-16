/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:24:50 by yaktas            #+#    #+#             */
/*   Updated: 2022/10/11 22:24:50 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Libft/libft.h"
# include <stdio.h>

typedef struct			stack_list
{
	char				c;
	int					content;
	int					index;
	struct stack_list	*next;
}						t_list;

//libft
int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
int				ft_isdigit(int c);
void			ft_lstadd_back(t_list **lst, t_list *new);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);
void			*ft_memset(void *s, int c, size_t n);
void			ft_putendl_fd(char *s, int fd);
void			ft_putstr_fd(char *s, int fd);
unsigned int	str_word_count(const char *s, char d);
size_t			ft_strlcpy(char *dst, const char *src, size_t n);
size_t			ft_strlen(const char *s);

#endif