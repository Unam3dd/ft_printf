# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stales <stales@student42.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 17:57:38 by stales            #+#    #+#              #
#    Updated: 2022/04/12 09:46:39 by stales           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FTPRINTF_SRC	:= $(wildcard *.c)
OBJ				:= $(FTPRINTF_SRC:.c=.o)
CFLAGS			:= -Wall -Wextra -Werror -I include
NAME			:= libftprintf.a

all:	$(LIBFT) $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -fPIE -o $@ -c $<

$(NAME):		$(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:			clean
	$(RM) $(NAME) $(OBJ)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
