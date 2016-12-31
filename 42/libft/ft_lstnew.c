/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 17:44:30 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/31 03:42:35 by Mads             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_node;

	new_node = (void*)malloc(sizeof(t_list));
	if (content && new_node)
	{
		new_node->content = (void*)malloc(content_size);
		ft_memcpy(new_node->content, content, content_size);
		new_node->content_size = content_size;
	}
	else if (!content && new_node)
	{
		new_node->content = NULL;
		new_node->content_size = 0;
	}
	(new_node) ? (new_node->next = NULL) : new_node;
	return (new_node);
}
