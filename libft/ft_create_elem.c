/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 11:43:06 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:00:55 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./includes/libft.h"

t_list		*ft_create_elem(void *data)
{
	t_list *newnode;

	if (!(newnode = malloc(sizeof(t_list) * 1)) || !data)
		return (NULL);
	newnode->content = data;
	newnode->content_size = sizeof(data);
	newnode->next = NULL;
	return (newnode);
}
