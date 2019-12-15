/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:27:23 by dapinto           #+#    #+#             */
/*   Updated: 2019/12/15 16:29:52 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			if (str[i] == (char)c)
				return ((char *)&str[i]);
			i++;
		}
	}
	return (NULL);
}
