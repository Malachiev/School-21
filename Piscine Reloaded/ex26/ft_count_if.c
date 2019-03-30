/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:54:58 by gconroy           #+#    #+#             */
/*   Updated: 2018/11/30 18:59:44 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f) (char *))
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			k++;
		i++;
	}
	return (k);
}
