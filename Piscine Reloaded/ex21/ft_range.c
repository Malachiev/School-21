/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 20:48:41 by gconroy           #+#    #+#             */
/*   Updated: 2018/11/28 20:28:00 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*str;

	i = 0;
	if (min < max)
	{
		str = (int*)malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			str[i] = min;
			i++;
			min++;
		}
		return (str);
	}
	return (NULL);
}
