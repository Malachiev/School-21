/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 18:52:18 by gconroy           #+#    #+#             */
/*   Updated: 2019/03/30 19:16:13 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>
#include <libft.h>

int open_file(const char *filename)
{
    int fd;

    if ((fd = open(filename, O_RDONLY)) == -1)
        return (-1);
    if (!read_and_verify(fd))
    {
        close(fd);
        return (-1);
    }
    if (close(fd) == -1)
        return (-1);
    return (1);
}