/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 17:26:28 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/27 23:06:59 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (s1[i1] != '\0')
		i1++;
	while (i2 < (int)n && s2[i2])
	{
		s1[i1] = s2[i2];
		i1++;
		i2++;
	}
	s1[i1] = '\0';
	return (s1);
}
