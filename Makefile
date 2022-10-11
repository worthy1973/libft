# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 14:35:26 by dlopez-i          #+#    #+#              #
#    Updated: 2022/10/07 15:35:45 by dlopez-i         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

RM = rm -f

HEADER = libft.h

INCLUDE = -I.\
		  
AR = ar

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_bzero.c ft_isalpha.c ft_isalnum.c ft_isascii.c  ft_isdigit.c ft_isprint.c ft_memchr.c \
	   ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_strlcat.c \
ft_strlen.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c 

OBJS = $(SRCS:.c=.o)

DEPS = $(SRCS:.c=.d)

all: $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	 $(AR) -rcs $(NAME) $(OBJS)

-include $(DEPS)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -MMD $(INCLUDE) -c $< -o $@
 
clean : 
	$(RM) $(OBJS) $(DEPS)

fclean : clean
	$(RM)  $(NAME)

re : fclean all

.PHONY : all clean fclean re 
