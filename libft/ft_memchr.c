/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:02:59 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:05:08 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memchr(const void *string, int c, size_t n)
{
	unsigned char *string_ptr;

	string_ptr = (unsigned char *)string;
	if (!n)
		return (string_ptr);
	while (n--)
	{
		if (*(string_ptr) == (unsigned char)c)
			return (string_ptr);
		string_ptr++;
	}
	return (NULL);
}
