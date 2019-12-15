/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 08:11:09 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:05:01 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char	*src_ptr;
	unsigned char		*dest_ptr;

	src_ptr = src;
	dest_ptr = dest;
	while (n--)
	{
		if (*src_ptr == (unsigned char)c)
		{
			*(dest_ptr++) = *(src_ptr++);
			return (dest_ptr);
		}
		*(dest_ptr++) = *(src_ptr++);
	}
	return (NULL);
}
