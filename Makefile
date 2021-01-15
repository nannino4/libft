# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcefalo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/11 14:31:14 by gcefalo           #+#    #+#              #
#    Updated: 2021/01/15 10:41:55 by gcefalo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a
SRCS =		$(filter-out $(BSRCS), $(wildcard *.c))
OBJS =		$(SRCS:.c=.o)
BSRCS =		$(wildcard ft_lst*)
BOBJS =		$(BSRCS:.c=.o)
CFLAGS =	-Wall -Wextra -Werror

%.o:		%.c
			gcc -c $(CFLAGS) $<

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

bonus:		$(BOBJS) $(OBJS)
			ar rcs $(NAME) $(BOBJS) $(OBJS)

clean:
			rm -f $(OBJS) $(BOBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
