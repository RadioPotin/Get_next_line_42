/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 13:26:01 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:04:11 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include <stdlib.h>

void	ft_lstadd(t_list **alst, t_list *newnode)
{
	t_list *ptr;

	if (alst && newnode)
	{
		ptr = *alst;
		newnode->next = ptr;
		*alst = newnode;
	}
}
