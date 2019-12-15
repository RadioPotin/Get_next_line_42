/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:17:18 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/15 10:36:56 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	*s1_ptr;
	char	*s2_ptr;
	size_t	tmp_len;

	if (!*s2)
		return ((char *)s1);
	while (len-- && *s1)
	{
		if (*s1 == *s2)
		{
			s1_ptr = (char *)s1 + 1;
			s2_ptr = (char *)s2 + 1;
			tmp_len = len;
			while (tmp_len-- && *s1_ptr && *s2_ptr && *s1_ptr == *s2_ptr)
			{
				++s1_ptr;
				++s2_ptr;
			}
			if (!*s2_ptr)
				return ((char *)s1);
		}
		++s1;
	}
	return (NULL);
}
