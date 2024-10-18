/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <<marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:50:41 by eschula           #+#    #+#             */
/*   Updated: 2024/10/17 18:22:27 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *c, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*c == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == c[0])
		{
			while (str[i + j] == c[j] && (i + j) < len && c[j] != '\0')
				j++;
		}
		if (c[j] == '\0')
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
