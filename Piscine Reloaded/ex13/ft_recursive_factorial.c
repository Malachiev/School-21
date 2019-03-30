/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:30:34 by gconroy           #+#    #+#             */
/*   Updated: 2018/11/24 18:58:03 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int i;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 12 || nb < 0)
		return (0);
	i = nb;
	return (i * ft_recursive_factorial(nb - 1));
}
