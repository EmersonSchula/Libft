/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <<marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:52:52 by eschula           #+#    #+#             */
/*   Updated: 2024/10/25 19:10:05 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	const char		*last_occurrence;

	uc = (unsigned char)c;
	last_occurrence = NULL;
	while (*s != '\0')
	{
		if (*s == uc)
			last_occurrence = s;
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}
