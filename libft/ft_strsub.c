/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 08:01:49 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:09:02 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./includes/libft.h"

char	*ft_strsub(char const *s, unsigned int i, size_t len)
{
	char			*dup;
	unsigned int	j;

	j = 0;
	dup = NULL;
	if (s)
	{
		if (!(dup = malloc(sizeof(char) * len + 1)))
			return (NULL);
		while (len-- && s[i])
			dup[j++] = s[i++];
		dup[j] = '\0';
	}
	return (dup);
}
