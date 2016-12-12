/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 18:00:23 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/12 15:08:23 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putnbr(int nbr)
{
	int buff;

	if (nbr % 10 != nbr)
	{
		ft_putnbr(nbr / 10);
	}
	buff = 48 + (nbr % 10);
	write(1, &buff, 1);
	return (0);
}
