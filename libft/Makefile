# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsahloul <lsahloul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 13:39:19 by leen              #+#    #+#              #
#    Updated: 2025/04/24 20:39:25 by lsahloul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FILES = ft_atoi.c ft_isdigit.c ft_memchr.c ft_putendl_fd.c  ft_striteri.c ft_strncmp.c ft_toupper.c \
ft_bzero.c   ft_isprint.c   ft_memcmp.c    ft_putnbr_fd.c  ft_strjoin.c  ft_strnstr.c      \
ft_calloc.c  ft_itoa.c   ft_memcpy.c   ft_putstr_fd.c   ft_strlcat.c   ft_strrchr.c \
ft_isalnum.c   ft_memmove.c  ft_split.c   ft_strlcpy.c    ft_strtrim.c \
ft_isalpha.c   ft_memset.c   ft_strchr.c   ft_strlen.c   ft_substr.c \
ft_isascii.c   ft_putchar_fd.c   ft_strdup.c  ft_strmapi.c   ft_tolower.c \
ft_printf/address_print.c     ft_printf/ft_printf.c         ft_printf/hexadecimal_print.c ft_printf/string_print.c \
ft_printf/character_print.c     ft_printf/number_print.c      ft_printf/unsigned_print.c

OBJS = $(FILES:.c=.o)

BONUS	=  ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUS_OBJS		= $(BONUS:.c=.o)

CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME) bonus

%.o		:	%.c
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

bonus:			$(NAME) $(OBJS) $(BONUS_OBJS) 
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
