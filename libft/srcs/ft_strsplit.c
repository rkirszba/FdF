/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:58:09 by allefebv          #+#    #+#             */
/*   Updated: 2019/09/16 13:09:04 by rkirszba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strdup_split(char const *s, char c, int *i)
{
	int		j;
	char	*new;

	j = 0;
	while (s[j] != c && s[j] != '\0')
		j++;
	if (!(new = (char*)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	j = 0;
	while (s[j] != c && s[j] != '\0')
	{
		new[j] = s[j];
		j++;
	}
	new[j] = '\0';
	*i = *i + j;
	return (new);
}

static int	ft_size(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**s_str;
	int		size_s_str;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	size_s_str = ft_size(s, c);
	if (!(s_str = (char**)ft_memalloc(sizeof(char*) * (size_s_str + 1))))
		return (NULL);
	s_str[size_s_str] = 0;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			return (s_str);
		if (!(s_str[j] = ft_strdup_split((s + i), c, &i)))
			return (NULL);
		else
			j++;
	}
	return (s_str);
}
