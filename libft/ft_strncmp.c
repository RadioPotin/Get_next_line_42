/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:37:23 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/15 10:12:39 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	return (*s1 && *s2 && *s1 == *s2 ? ft_strncmp(++s1, ++s2, --n)\
			: (unsigned char)*s1 - (unsigned char)*s2);
}
