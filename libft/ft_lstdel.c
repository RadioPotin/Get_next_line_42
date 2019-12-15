/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 11:51:41 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:04:20 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *ptr1;
	t_list *ptr2;

	ptr1 = *alst;
	if (alst)
	{
		while (ptr1)
		{
			del(ptr1->content, ptr1->content_size);
			ptr2 = ptr1;
			free(ptr2);
			ptr1 = ptr1->next;
		}
		*alst = NULL;
	}
}
