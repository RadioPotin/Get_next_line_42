/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 08:52:19 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:05:38 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;

	dst_ptr = dest;
	src_ptr = (unsigned char *)src;
	if (!len)
		return (dst_ptr);
	if (dst_ptr < src_ptr)
	{
		ft_memcpy(dst_ptr, src_ptr, len);
		return (dst_ptr);
	}
	while (--len)
		dst_ptr[len] = src_ptr[len];
	dst_ptr[0] = src_ptr[0];
	return (dst_ptr);
}
