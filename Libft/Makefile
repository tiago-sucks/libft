# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 14:39:28 by tsimao-g          #+#    #+#              #
#    Updated: 2025/10/27 17:40:17 by tsimao-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c ft_strlen.c ft_strdup.c \
					ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
					ft_memcpy.c  ft_strchr.c  ft_strlcpy.c ft_memset.c ft_toupper.c\
					ft_strnstr.c ft_tolower.c ft_isascii.c
					
OBJS			= $(SRCS:.c=.o)

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

.PHONY:			all clean fclean re