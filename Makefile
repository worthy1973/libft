# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 12:41:30 by dlopez-i          #+#    #+#              #
#    Updated: 2022/11/07 19:24:13 by dlopez-i         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

BNUS = .bonus

INCLUDE = -I ./

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

SRCS_BONUS = 	ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c 

#Colors
END = \033[m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
#Font
ligth = \033[1m
dark = \033[2m
italic = \033[3m

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

DEPS = $(SRCS:.c=.d)
DEPS_BONUS = $(SRCS_BONUS:.c=.d)

AR = ar
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CFLAGS) -MMD $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) -rcs $(NAME) $(OBJS)
	@echo "$(GREEN)$(ligth)All the obligatory stuff is created$(END)"

-include $(DEPS)

bonus: $(BNUS)

$(BNUS): $(OBJS) $(OBJS_BONUS)
	$(AR) -rcs $(NAME) $(OBJS) $(OBJS_BONUS)
	touch $@
	@echo "$(GREEN) $(dark)All the bonus stuff is created$(END)"

-include $(DEPS_BONUS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS) $(DEPS) $(DEPS_BONUS) $(BNUS)
	@echo "$(YELLOW)$(ligth)Objects and Dependencies removed$(END)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)$(ligth)Everything is clean$(END)"

re: fclean all

.PHONY: all bonus clean fclean re
