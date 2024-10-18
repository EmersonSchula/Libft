/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <<marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:12:51 by eschula           #+#    #+#             */
/*   Updated: 2024/10/18 16:20:40 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	get_start(const char *s1, const char *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	return (start);
}

static size_t	get_end(const char *s1, const char *set, size_t start)
{
	size_t	end;

	end = start;
	while (s1[end] != '\0')
		end++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set, start);
	len = end - start;
	trimmed_str = (char *)malloc((len + 1) * sizeof(char));
	if (!trimmed_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed_str[i] = s1[start + i];
		i++;
	}
	trimmed_str[len] = '\0';
	return (trimmed_str);
}
