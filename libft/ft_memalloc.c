/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:02:24 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:04:55 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	mem = NULL;
	if (size > 134217728)
		return (NULL);
	if (!(mem = malloc(sizeof(unsigned char) * size)))
		return (NULL);
	else
		ft_bzero(mem, size);
	return (mem);
}
