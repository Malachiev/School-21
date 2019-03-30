/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 19:11:19 by gconroy           #+#    #+#             */
/*   Updated: 2018/11/30 20:05:36 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	while (src[i] != '\0')
		i++;
	str = (char*)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	while (k < i)
	{
		str[k] = src[k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
