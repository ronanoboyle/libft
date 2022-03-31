/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ro-boyle <ro-boyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:20:47 by ro-boyle          #+#    #+#             */
/*   Updated: 2022/03/15 18:30:24 by ro-boyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (*lst && del)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = tmp;
		}
	}
}
