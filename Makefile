# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 14:35:26 by dlopez-i          #+#    #+#              #
#    Updated: 2022/10/31 16:57:24 by dlopez-i         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

RM = rm -rf

INCLUDE = -I.\

OBJS_DIR = objs_deps

BONUS_OBJS_DIR = objs_deps_bonus

AR = ar -rcs

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

BONUS_SCRS = ft_lstnew.c


OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))

BONUS_OBJS = $(addprefix $(BONUS_OBJS_DIR)/, $(BONUS_SCRS:.c=.o))

DEPS = $(addsuffix .d, $(basename $(OBJS)))

BONUS_DEPS = $(addsuffix .d, $(basename $(BONUS_OBJS)))

all: $(NAME)

$(NAME) : $(OBJS) 
	 $(AR) $(NAME) $(OBJS)
	 @echo "All the obligatory stuff is created"
	 @echo "Library created"

-include $(DEPS)

#bonus : $(BNUS)
#	 touch bonus
#	 echo BONUS_OBJS: $(BONUS_OBJS)
#$(BNUS) : $(BONUS_OBJS)

bonus: $(BONUS_OBJS) $(OBJS)
	 $(AR) $(NAME) $(BONUS_OBJS) $(OBJS)
	 @echo "All the bonus stuff is created"
	 @touch bonus

-include $(BONUS_DEPS)

$(OBJS): | $(OBJS_DIR)

$(BONUS_OBJS): | $(BONUS_OBJS_DIR)

$(OBJS_DIR): 
	@mkdir $@
	@echo "The directory has been created"

$(OBJS_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP $(INCLUDE) -c $< -o $@

$(BONUS_OBJS_DIR): 
	@mkdir $@
	@echo "The bonus directory has been created"

$(BONUS_OBJS_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP $(INCLUDE) -c $< -o $@

clean : 
	@$(RM) $(OBJS_DIR) $(BONUS_OBJS_DIR)
	@echo "objs and deps removed"

fclean : clean
	@$(RM) $(NAME)
	@echo "Everything is clean"

re : fclean all

.PHONY : all bonus clean fclean re 
