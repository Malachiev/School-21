/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:56:41 by gconroy           #+#    #+#             */
/*   Updated: 2018/11/30 19:18:04 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int res;

	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	res = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
