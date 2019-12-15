/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 11:39:25 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:07:47 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			ret[i] = f(ret[i]);
			i++;
		}
	}
	return (ret);
}
