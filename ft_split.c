/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <<marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:29:55 by eschula           #+#    #+#             */
/*   Updated: 2024/10/24 20:15:32 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_split(char **result, size_t j)
{
	while (j > 0)
	{
		free(result[j - 1]);
		j--;
	}
	free(result);
}

static char	*word_dup(const char *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = (char *)malloc((end - start + 1) * (sizeof(char)));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static int	bcp_split(char const *src, char **dest, char c, int ind)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = ind;
	j = 0;
	while (src[i] == c)
		i++;
	if (src[i] != '\0')
	{
		start = i;
		while (src[i] && src[i] != c)
			i++;
		dest[j] = word_dup(src, start, i);
		if (!dest[j])
		{
			free_split(dest, j);
			return (0);
		}
		j++;
	}
	dest[j] = NULL;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	result = (char **)malloc((word_count(s, c) + 1) * (sizeof(char *)));
	if (!result)
		return (NULL);
	while (s[i])
	{
		i = bcp_split(s, result, c, i);
	}
	return (result);
}
