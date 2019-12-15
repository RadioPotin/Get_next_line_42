/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:57:16 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:05:44 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memset(void *memadr, int val, size_t n)
{
	unsigned char *adr_ptr;

	adr_ptr = memadr;
	while (n--)
		*(adr_ptr++) = (unsigned char)val;
	return (memadr);
}
