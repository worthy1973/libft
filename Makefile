# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 14:35:26 by dlopez-i          #+#    #+#              #
#    Updated: 2022/10/26 15:17:02 by dlopez-i         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

RM = rm -rf

INCLUDE = -I.\

OBJS_DIR = objs_deps

AR = ar

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_calloc.c \
	   ft_isalpha.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_itoa.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_putchar_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_putstr_fd.c \
	   ft_split.c \
	   ft_strchr.c \
	   ft_strlcpy.c \
	   ft_strncmp.c \
	   ft_strlcat.c \
	   ft_strdup.c \
	   ft_strjoin.c \
	   ft_strlen.c \
	   ft_strmapi.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_striteri.c \
	   ft_strtrim.c \
	   ft_substr.c \
	   ft_tolower.c \
	   ft_toupper.c 

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))

DEPS = $(addsuffix .d, $(basename $(OBJS)))

all: $(NAME)

$(NAME) : $(OBJS) 
	 $(AR) -rcs $(NAME) $(OBJS)
	 @echo "All the stuff is created"
	 @echo "Library created"

-include $(DEPS)

$(OBJS): | $(OBJS_DIR)

$(OBJS_DIR): 
	@mkdir $@
	@echo "The directory has been created"

$(OBJS_DIR)/%.o : %.c
	$(CC) $(CFLAGS) -MMD -MP $(INCLUDE) -c $< -o $@
 
clean : 
	@$(RM) $(OBJS_DIR)
	@echo "objs and deps removed"

fclean : clean
	@$(RM) $(NAME)
	@echo "Everything is clean"

re : fclean all

.PHONY : all clean fclean re 
