/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:26:57 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:07:56 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	ret = NULL;
	i = 0;
	if (s)
	{
		ret = ft_strdup(s);
		if (ret == NULL)
			return (NULL);
		while (i < ft_strlen((char *)s))
		{
			ret[i] = f(i, ret[i]);
			i++;
		}
	}
	return (ret);
}
