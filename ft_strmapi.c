/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ro-boyle <ro-boyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:39:33 by ro-boyle          #+#    #+#             */
/*   Updated: 2022/03/10 19:04:47 by ro-boyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	i = 0;
	if (!s)
		return (0);
	new_str = ft_strdup(s);
	if (!new_str || !f)
		return (0);
	while (new_str[i])
	{
			new_str[i] = f(i, new_str[i]);
			i++;
	}
	return (new_str);
}
