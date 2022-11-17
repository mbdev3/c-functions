# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbanani <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/11 13:05:37 by mbanani           #+#    #+#              #
#    Updated: 2018/11/05 17:20:00 by mbanani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

H = includes/

all: $(NAME)

$(NAME):
	    gcc -I $(H) -c -Wall -Wextra -Werror $(SRC)
		    ar rc $(NAME) *.o
clean:
	    /bin/rm -f *.o

fclean:
	    /bin/rm -f *.o
		    /bin/rm -f $(NAME)

re: fclean all
