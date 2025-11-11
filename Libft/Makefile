# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsimao-g <tsimao-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 14:39:28 by tsimao-g          #+#    #+#              #
#    Updated: 2025/11/11 18:00:58 by tsimao-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_strlen.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
					ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
					ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
					ft_strlcpy.c ft_atoi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
					ft_tolower.c ft_toupper.c ft_strjoin.c ft_calloc.c ft_strtrim.c \
					ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
					ft_strmapi.c ft_striteri.c ft_itoa.c ft_split.c ft_substr.c

OBJS			=	$(SRCS:.c=.o)

BONUS			=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
					ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
					ft_lstmap.c

BONUS_OBJS		=	$(BONUS:.c=.o)

CC				=	cc
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror
NAME			=	libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

%.o: %.c
				$(CC) $(CFLAGS) -c $< -o $@

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all bonus clean fclean re

# bonus is now a phony target that depends on .bonus
# .bonus is a real file that acts as a timestamp and depends on $(BONUS_OBJS)
# Only bonus objects are added to the archive with ar rcs $(NAME) $(BONUS_OBJS)
# Removed .bonus from .PHONY so Make treats it as a real file target

# Now:

# First make bonus: Compiles bonus objects, adds them to libft.a, creates .bonus file
# Second make bonus: Make sees .bonus exists and bonus objects haven't changed → prints "nothing to be done for 'bonus'"

# The .bonus (with the dot prefix) is a convention, but you could name it anything. Here's why it's commonly used:
# Why the dot prefix?

# Hidden files: In Unix/Linux, files starting with . are hidden by default when you run ls. This keeps your project directory clean-looking since .bonus is just a timestamp marker file, not actual source code.
# Convention: It's a common practice in Makefiles to use hidden files for tracking build states (like .PHONY targets that need persistence).
# Avoids naming conflicts: Less likely to conflict with actual source files or other project files.