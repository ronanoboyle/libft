/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ro-boyle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:31:55 by ro-boyle          #+#    #+#             */
/*   Updated: 2022/03/07 19:01:15 by ro-boyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long nb)
{
	int	num_len;

	num_len = 0;
	if (nb == 0)
		num_len = 1;
	if (nb < 0)
	{
		nb *= -1;
		num_len++;
	}
	while (nb)
	{
		nb /= 10;
		num_len++;
	}
	return (num_len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = n;
	len = ft_numlen(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	if (n < 0 && nb != 0)
	{	
		str[0] = '-';
		nb *= -1;
	}
	while (nb)
	{
		str[len--] = '0' + (nb % 10);
		nb /= 10;
	}
	return (str);
}
