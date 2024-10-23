/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <<marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:12:35 by eschula           #+#    #+#             */
/*   Updated: 2024/10/23 15:32:51 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;
	long	num;
	
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		num = n;
	}
	else
		num = n;
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	digit = (num % 10) + '0';
	ft_putchar_fd(&digit, fd);
}