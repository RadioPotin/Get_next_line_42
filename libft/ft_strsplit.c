/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:31:37 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:08:50 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./includes/libft.h"
#include <stdio.h>

static int		ft_words(char const *s, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
			i++;
		if ((s[i] == c || s[i] == '\0') && (s[i - 1] != c))
			words++;
		i++;
	}
	return (words);
}

static int		ft_wlen(char const *s, int i, char c)
{
	int letters;

	letters = 0;
	while (s[i] && (s[i] != c))
	{
		i++;
		letters++;
	}
	return (letters);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**graal;
	int		i;
	int		j;
	int		o;

	i = 0;
	j = 0;
	if (!s || !(graal = malloc(sizeof(char*) * ft_words(s, c) + 1)))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		graal[j] = malloc(sizeof(char) * ft_wlen(s, i, c) + 1);
		o = 0;
		if (s[i])
		{
			while (s[i] && (s[i] != c))
				graal[j][o++] = s[i++];
			graal[j++][o] = '\0';
		}
	}
	graal[j] = 0;
	return (graal);
}
