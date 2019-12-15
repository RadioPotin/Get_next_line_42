/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 08:01:16 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:04:47 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*newnode;
	void	*data;

	data = (void *)content;
	if (!(newnode = malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		newnode->content = NULL;
		newnode->content_size = 0;
		newnode->next = NULL;
		return (newnode);
	}
	if (!(data = ft_memalloc(content_size)))
	{
		free(data);
		return (NULL);
	}
	ft_memcpy(data, content, content_size);
	newnode->content = data;
	newnode->content_size = content_size;
	newnode->next = NULL;
	return (newnode);
}
