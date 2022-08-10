# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeonjeon <jeonjeon@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 16:40:18 by jeonjeon          #+#    #+#              #
#    Updated: 2022/08/11 00:09:21 by jeonjeon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	push_swap
NAME_B	=	checker

SRCS	=	srcs/ab_to_ab.c srcs/check_sort.c srcs/element.c \
			srcs/func_p.c srcs/func_r.c srcs/func_rr.c srcs/func_s.c \
			srcs/pivot.c srcs/push_swap.c srcs/small_sort.c srcs/sort.c \
			srcs/split.c srcs/utils.c

OBJS	=	$(SRCS:.c=.o)

OBJS_B	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS) $(OBJS_B)

fclean:		clean
			rm -f $(NAME) $(NAME_B)

re:			fclean all

.PHONY:		all clean fclean re bonus
