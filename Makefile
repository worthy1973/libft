# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 14:35:26 by dlopez-i          #+#    #+#              #
#    Updated: 2022/10/11 20:30:48 by dlopez-i         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

RM = rm -f

HEADER = libft.h

INCLUDE = -I.\

OBJS_DIR = objs_deps

AR = ar

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_bzero.c ft_isalpha.c ft_isalnum.c ft_isascii.c  ft_isdigit.c ft_isprint.c ft_memchr.c \
	   ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_strlcat.c \
ft_strlen.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c 

OBJS = $(addprefix , $(OBJS_DIR)/ $(SRCS:.c=.o))

DEPS = $(addsuffix .d, $(basename (OBJS)))

all:
	$(NAME)

$(NAME) : $(OBJS) $(HEADER)
	 $(AR) -rcs $(NAME) $(OBJS)
	 @echo "All the stuff is created":
	 @echo "Library created"

-include $(DEPS)

$(OBJS): | $(OBJS_DIR)

$(OBJS_DIR): 
	@mkdir $@
	@echo "The directory has been created"

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -MMD -MP $(INCLUDE) -c $< -o $@
 
clean : 
	@$(RM) $(OBJS) $(DEPS)
	@echo "objs and deps removed"

fclean :
	@$(MAKE) clean
	@$(RM)  $(NAME)
	@echo "Everything is clean"

re : fclean all

.PHONY : all clean fclean re 
