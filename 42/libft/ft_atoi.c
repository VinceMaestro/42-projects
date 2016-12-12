/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 18:35:09 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/12 14:51:10 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	buff;

	i = 0;
	buff = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (i > 0)
			buff *= 10;
		buff += (str[i] - 48);
		if (buff == 0)
			buff = 1;
		i++;
	}
	return (buff);
}
