/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 19:15:42 by gconroy           #+#    #+#             */
/*   Updated: 2019/04/01 13:13:47 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include "libft.h"
# include <stdio.h>

void	ft_er(void);
int		file_open(const char *filename);
int     read_and_verify(int fd);
int     verify_links(const char *tetro_str);
int     count_the_symbols(const char *tetro_str);
int     verify_newline_and_count_tetro(char *tetro_str, int *last_newline, int count_tetro);

#endif
