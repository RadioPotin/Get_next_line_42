/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:01:06 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:08:29 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./includes/libft.h"

char	*ft_strnew(size_t size)
{
	char *ret;

	ret = NULL;
	if (!(ret = malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_memset(ret, 0, size + 1);
	return (ret);
}
