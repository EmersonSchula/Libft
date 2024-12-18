/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <<marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:39:01 by eschula           #+#    #+#             */
/*   Updated: 2024/10/29 11:58:51 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	if (count == 0 || size == 0)
		total_size = 1;
	else
		total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, total_size);
	return (ptr);
}
