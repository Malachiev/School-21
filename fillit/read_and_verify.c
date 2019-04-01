/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_and_verify.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 19:19:16 by gconroy           #+#    #+#             */
/*   Updated: 2019/04/01 13:11:43 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

// 3) Считываем и проверяем правильность тетраминос


// 3.4) Считаем количетсво связей у каждой ячейки фигуры(#).
//      Соседние ячейки справа - слева, свеху - снизу. 
//      У правильных тетраминос их должно быть 6, за исключеним кубика у которого 8.

int verify_links(const char *tetro_str)
{
    int i;
    int links;

    i = 0;
    links = 0;
    while (tetro_str[i] != '\0')
    {
        if (tetro_str[i] == '#')
        {
            if (i && tetro_str[i - 1] == '#')
                links++;
            if (i < 18 && tetro_str[i + 1] == '#')
                links++;
            if (i > 4 && tetro_str[i - 5] == '#')
                links++;
            if (i < 14 && tetro_str[i + 5] == '#')
                links++;
            if (!links)
                return (-1);
        }
        i++;
    }
    if (links == 6 || links == 8)
        return (1);
    else
        return (-1);
}

// 3.3) Считаем количество символов в считаном тетраминос
//      В правильном тетраминос содержится: 4 - '#' ,  12 - '.' и 4 - '\n' 

int count_the_symbols(const char *tetro_str)
{
    int i;
    int sharp;
    int newline;
    int point;

    i = 0;
    sharp = 0;
    point = 0;
    newline = 0;
    while (tetro_str[i] != '\0')
    {
        if (tetro_str[i] == '.')
            point++;
        if (tetro_str[i] == '#')
            sharp++;
        if (tetro_str[i] == '\n')
            newline++;
        i++;
    }
    if (point == 12 && sharp == 4 && newline == 4)
        return (1);
    else
        return (-1);
}

// 3.2 Проверяем правильность расположения '\n' в тетраминос и общее количество считаных тетраминос с файла.

int verify_newline_and_count_tetro(char *tetro_str, int *last_newline, int count_tetro)
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
        *last_newline = 1;
    else
        *last_newline = 0;
    return (1);
}

// 3.1) tetro_str - буфер, в который мы считываем тераминос с файла(1 тетраминос - это 20 символов) 
//      count_tetro - количество считанных тетраминос (их должно быть не больше 26) 
//      last_newline - проверяем заканчивается ли каждый тетраминос переводом строки

int read_and_verify(int fd)
{
    char    *tetro_str;
    int     count_tetro;
    int     last_newline;

    tetro_str = ft_strnew(21);
    count_tetro = 0;
    while (read(fd, tetro_str, 21))
    {
        if (verify_newline_and_count_tetro(tetro_str, &last_newline, count_tetro + 1) == -1)
            return (-1);
        tetro_str[20] = '\0';
        if (count_the_symbols(tetro_str) == -1)
            return (-1);
        if (verify_links(tetro_str) == -1)
            return (-1);
        ft_strdel(&tetro_str);
        count_tetro++;
    }
    ft_strdel(&tetro_str);
    if (!count_tetro || last_newline)
        return (-1);
    return (1);
}