# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiago <tiago@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 14:39:28 by tsimao-g          #+#    #+#              #
#    Updated: 2025/10/30 01:24:18 by tiago            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_strlen.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
					ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
					ft_memmove.c  ft_memset.c  ft_strchr.c ft_strdup.c ft_strlcat.c \
					ft_strlcpy.c ft_atoi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
					ft_tolower.c ft_toupper.c NOVO_ft_strjoin.c

OBJ_DIR			=	obj
OBJS			=	$(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

CC				=	cc
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -I.

NAME			=	libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

$(OBJ_DIR)/%.o:	%.c
				mkdir -p $(OBJ_DIR)
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				$(RM) -r $(OBJ_DIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re

# OBJ_DIR = obj --variável para o diretorio
# OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o)) -- adiciona o prefixo obj à frente dos .o
# $(OBJ_DIR)/%.o:%.c  --faz qualquer obj/*.o file, procurar pelo *.c file de nome igual
# mkdir -p $(OBJ_DIR) --cria o obj se não houver
# $(RM) -r $(OBJ_DIR) --remove o diretorio obj