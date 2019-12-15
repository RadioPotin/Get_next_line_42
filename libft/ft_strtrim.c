/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 08:02:23 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:09:08 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./includes/libft.h"

char	*ft_strtrim(char const *s)
{
	char			*ret;
	size_t			tail;
	unsigned int	i;
	unsigned int	head;

	if (!s)
		return (NULL);
	i = 0;
	ret = NULL;
	while (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
		i++;
	head = i;
	if (head == ft_strlen(s))
		return (ft_strnew(1));
	tail = ft_strlen(s) - 1;
	while (s[tail] == '\n' || s[tail] == ' ' || s[tail] == '\t')
		--tail;
	ret = ft_strsub(s, head, tail - i + 1);
	return (ret);
}
