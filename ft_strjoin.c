/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ro-boyle <ro-boyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:13:14 by ro-boyle          #+#    #+#             */
/*   Updated: 2022/03/31 11:56:25 by ro-boyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_str = (char *)malloc(sizeof(char)
			* ((ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (new_str != NULL && s2 != NULL)
	{
		while (s1[i])
		{
			new_str[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			new_str[i + j] = s2[j];
			j++;
		}
		new_str[i + j] = '\0';
		return (new_str);
	}
	return (0);
}
