/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_and_verify.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 19:19:16 by gconroy           #+#    #+#             */
/*   Updated: 2019/03/30 19:53:55 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>
#include <libft.h>

int verify(char *tetro_str, int *last_tetro, int count_tetro)
{
    int newline;

    newline = 19;
    if (count_tetro > 26)
        return (-1);
    while (newline > 0)
    {
        if (tetro_str[newline] != '\n')
            return (-1);
        newline -= 5; 
    }
    if (tetro_str[20] != '\n' && tetro_str[20] != '\0')
        return (-1);
    if (tetro_str[20] != '\0')
        *last_tetro = 1;
    else
        *last_tetro = 0;
    return (1);
}

int read_and_verify(int fd)
{
    char    *tetro_str;
    int     count_tetro;
    int     last_tetro;

    tetro_str = ft_strnew(21);
    count_tetro = 0;
    while (read (fd, tetro_str, 21))
    {
        if (verify(tetro_str, &last_tetro, count_tetro + 1) == -1)
            return (-1);
        
    }
}