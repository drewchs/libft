# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asenewe <asenewe@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/11 21:19:28 by ncolomer          #+#    #+#              #
#    Updated: 2023/12/04 19:30:00 by asenewe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_isascii.c	\
					ft_strlen.c ft_memset.c ft_strchr.c ft_memcpy.c ft_memmove.c 		\
					ft_toupper.c ft_tolower.c ft_atoi.c ft_bzero.c ft_calloc.c 			\
					ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strlcpy.c ft_strnstr.c		\
					ft_strncmp.c ft_strrchr.c ft_itoa.c ft_strjoin.c ft_substr.c		\
					ft_strtrim.c ft_split.c

OBJS			= $(SRCS:.c=.o)

BONUS			=
BONUS_OBJS		= $(BONUS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus
