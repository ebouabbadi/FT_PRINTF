# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 17:50:53 by ebouabba          #+#    #+#              #
#    Updated: 2021/12/10 16:39:47 by ebouabba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MDTRY_FILE = 	ft_printf.c \
				ft_print_char.c \
				ft_print_string.c \
				ft_print_nbr.c \
				ft_strlen.c \
				ft_print_unsg_nbr.c \
				ft_print_hexa.c \
				ft_print_adres.c

NAME = libftprintf.a
OBJ_MDTRY = $(MDTRY_FILE:.c=.o)
CFLAGS = -Wall -Wextra -Werror
all : $(NAME)

HEADER = ft_printf.h

$(NAME): $(OBJ_MDTRY) $(HEADER)
	ar rc $(NAME) $(OBJ_MDTRY)
	
%.o : %.c
	$(CC) $(FLAGS) -o $@ -c $<

clean : 
	rm -f $(OBJ_MDTRY)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean all
