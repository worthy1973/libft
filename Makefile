# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 12:41:30 by dlopez-i          #+#    #+#              #
#    Updated: 2022/11/09 10:53:44 by dlopez-i         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME = libft.a
AR = ar -rcs
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
BONUS = .bonus
INCLUDE = -I ./
OBJS_DIR = objs_deps
BONUS_OBJS_DIR = objs_deps_bonus
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
DEPS = $(SRCS:.c=.d)
DEPS_BONUS = $(SRCS_BONUS:.c=.d)

#Sources

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

#Folders

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))
OBJS_BONUS = $(addprefix $(BONUS_OBJS_DIR)/, $(SRCS_BONUS:.c=.o))
DEPS = $(addsuffix .d, $(basename $(OBJS)))
BONUS_DEPS = $(addsuffix .d, $(basename $(OBJS_BONUS)))

#Colors

END = \033[m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m

#Fonts

ligth = \033[1m
bold  = \033[2m
italic = \033[3m

#Rules

%.o: %.c
	$(CC) $(CFLAGS) -MMD $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)$(ligth)All the obligatory stuff is created$(END)"
	@echo "$(YELLOW)$(ligth)Library created$(END)"

-include $(DEPS)

bonus: $(BONUS)

$(BONUS): $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)
	touch $@
	@echo "$(GREEN)$(ligth)All the bonus stuff is created$(END)"

-include $(DEPS_BONUS)

#
$(OBJS): | $(OBJS_DIR)
$(OBJS_BONUS): | $(BONUS_OBJS_DIR)
$(OBJS_DIR): 
	@mkdir $@
	@echo "$(YELLOW)$(ligth)The directory has been created$(END)"
$(OBJS_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP $(INCLUDE) -c $< -o $@
$(BONUS_OBJS_DIR): 
	@mkdir $@
	@echo "$(YELLOW)$(light)The bonus directory has been created$(END)"
$(BONUS_OBJS_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP $(INCLUDE) -c $< -o $@

.PHONY: all bonus clean fclean re
#Clean

clean :
	@$(RM) $(OBJS) $(OBJS_BONUS) $(DEPS) $(DEPS_BONUS) $(BONUS) $(OBJS_DIR) $(BONUS_OBJS_DIR)
	@echo "$(YELLOW)$(ligth)Objects and Dependencies removed$(END)"
fclean : clean
	@$(RM) $(NAME)
	@echo "Everything is clean"

re : fclean all 
