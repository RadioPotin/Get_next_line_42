/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:17:49 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:05:25 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memcpy(void *data1, const void *data2, size_t n)
{
	char		*ptr1;
	const char	*ptr2;

	ptr1 = data1;
	ptr2 = data2;
	while (n--)
		*(ptr1++) = *(ptr2++);
	return (data1);
}
