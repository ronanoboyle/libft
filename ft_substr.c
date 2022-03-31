/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ro-boyle <ro-boyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:47:01 by ro-boyle          #+#    #+#             */
/*   Updated: 2022/03/10 19:06:30 by ro-boyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*substr;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	while (size < len)
		len--;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (0);
	i = 0;
	while (i < len)
			substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
