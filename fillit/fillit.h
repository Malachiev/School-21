/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 19:15:42 by gconroy           #+#    #+#             */
/*   Updated: 2019/03/30 19:33:47 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include <sys\types.h>
# include <sys\stat.h>
# include <libft.h>
# include <stdio.h>

void	ft_er(void);
int		open_file(const char *filename);
int     read_and_verify(int fd);
int     verify(char *tetro_str, int last_tetro, int count_tetro);

#endif
