/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 16:39:17 by gconroy           #+#    #+#             */
/*   Updated: 2019/03/30 19:07:52 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>
#include <libft.h>

void	ft_er(void)
{
	write(1, "error\n", 6);
}

int	main(int argc, char	**argv)
{
	if (argc == 2)
	{
		if (!open_file(argv[1]))
			ft_er();
		return (1);
	}
	ft_er();
	return (0);
}
