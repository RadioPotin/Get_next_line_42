/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 07:35:02 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:01:25 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include <stdlib.h>
#include <stdio.h>

static char		*set_conversion(int nb, int neg, char *s)
{
	int i;
	int tmp;

	i = *s == '8' ? 1 : 0;
	if (nb >= 0 && nb <= 9)
	{
		s[i++] = nb + '0';
		if (neg)
			s[i] = '-';
		return (s);
	}
	while (nb)
	{
		tmp = nb % 10;
		s[i++] = tmp + '0';
		nb = nb / 10;
	}
	if (neg)
		s[i] = '-';
	return (s);
}

char			*ft_itoa(int nb)
{
	char	*s;
	int		neg;

	neg = 0;
	if (!(s = ft_memalloc(12)))
		return (NULL);
	if (nb == 0)
		return (set_conversion(0, neg, s));
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			*s = '8';
			s = set_conversion(214748364, 1, s);
			ft_strrev(s);
			return (s);
		}
		neg = 1;
		nb = -nb;
	}
	s = set_conversion(nb, neg, s);
	ft_strrev(s);
	return (s);
}
