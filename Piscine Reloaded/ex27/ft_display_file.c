/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:43:23 by gconroy           #+#    #+#             */
/*   Updated: 2018/11/29 20:10:15 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hed_hed.h"

void	ft_display(char *argv)
{
	int		ukaz;
	int		ukaz2;
	char	buf[1024];

	ukaz = open(argv, O_RDONLY);
	if (ukaz < 0)
		return ;
	while ((ukaz2 = read(ukaz, buf, 1023)) > 0)
		write(1, buf, ukaz2);
	close(ukaz);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display(argv[1]);
	return (0);
}
