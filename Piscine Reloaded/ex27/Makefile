# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gconroy <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/29 19:16:46 by gconroy           #+#    #+#              #
#    Updated: 2018/11/29 20:14:48 by gconroy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
GCC = gcc -Wextra -Werror -Wall
SISHNII = ft_display_file.c
OBEKTNII = ft_display_file.o
HED = -I hed_hed.h

all: $(NAME)
	$(GCC) -c $(SISHNII) $(HED) 
	$(GCC) $(OBEKTNII) -o $(NAME)

clean:
	rm -f $(OBEKTNII)

fclean: clean
	rm -f $(NAME)

re: fclean all
