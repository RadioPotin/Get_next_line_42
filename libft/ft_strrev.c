/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 11:33:33 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:08:45 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strrev(char *str)
{
	unsigned int	i;
	unsigned int	lth;
	char			r;

	i = 0;
	lth = ft_strlen(str) - 1;
	if (!str)
		return (NULL);
	if (ft_strlen(str) == 1)
		return (str);
	while (lth >= i)
	{
		r = str[lth];
		str[lth] = str[i];
		str[i] = r;
		lth--;
		i++;
	}
	return (str);
}
