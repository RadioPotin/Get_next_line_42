/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:29:06 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:07:30 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t dest_length;
	size_t src_length;

	i = 0;
	src_length = ft_strlen(src);
	dest_length = ft_strlen(dest);
	if (size <= dest_length)
		return (size + src_length);
	while (dest[i] && i < size - 1)
		i++;
	while (i < size - 1 && *src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest_length + src_length);
}
