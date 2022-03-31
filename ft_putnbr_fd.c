/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ro-boyle <ro-boyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:13:03 by ro-boyle          #+#    #+#             */
/*   Updated: 2022/03/10 14:35:01 by ro-boyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char n, int fd)
{
	write(fd, &n, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar('-', fd);
		if (n == -2147483648)
		{
			ft_putchar('2', fd);
			n = -147483648;
		}
		n *= -1;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar(48 + n % 10, fd);
}
