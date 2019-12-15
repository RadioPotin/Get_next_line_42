/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 13:47:37 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:04:41 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_head;
	t_list *ptr_lst;
	t_list *tm_ptr;
	t_list *tmp;

	ptr_lst = lst;
	if (!lst)
		return (NULL);
	if (!(new_head = malloc(sizeof(t_list))))
		return (NULL);
	tmp = f(ptr_lst);
	ptr_lst = ptr_lst->next;
	new_head = tmp;
	tm_ptr = tmp;
	while (ptr_lst)
	{
		if (!(tmp = malloc(sizeof(t_list))))
			return (NULL);
		tmp = f(ptr_lst);
		tm_ptr->next = tmp;
		tm_ptr = tm_ptr->next;
		ptr_lst = ptr_lst->next;
	}
	tm_ptr->next = NULL;
	return (new_head);
}
