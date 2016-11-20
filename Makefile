# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/29 01:07:36 by ydang             #+#    #+#              #
#    Updated: 2016/11/18 14:20:05 by ydang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, $(NAME), clean, fclean, re

NAME = pikachu

NOC=\033[0m
OKC=\033[32m
ERC=\033[31m
WAC=\033[33m
GRE=\x1b[32;01m
PUR=\033[94;1m

CC = gcc
CC_FLAGS = -Wall -Werror -Wextra

SRC_PATH = ./srcs/
INC_PATH = ./includes/
OBJ_PATH = ./obj/
LFT_PATH = ./includes/libft/

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
INC = $(addprefix -I, $(INC_PATH))

OBJ_NAME = $(SRC_NAME:.c=.o)

INC_NAME = pikachu.h

SRC_NAME = main.c \
		   test_color.c

all: $(NAME)

$(NAME): $(OBJ)
	@echo
	@make -C $(LFT_PATH)
	@$(CC) -o $(NAME) $(OBJ) -lm -L $(LFT_PATH) -lft
	@echo "$(OKC)PIKACHU:\t\tPIKACHU READY$(OKC)"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CC_FLAGS) $(INC) -o $@ -c $<
	@echo "$(NOC)--$(PUR)(⌐■_■)$(NOC)--GENERATING--LIBRARY--$(GRE)( ͡° ͜ʖ ͡°)$(NOC)--WAITWAIT--$(ERC)ʢ◉ᴥ◉ʡ$(NOC)--"

clean:
	@make -C $(LFT_PATH) clean
	@rm -rf $(OBJ_PATH)
	@echo "$(WAC)PIKACHU:\t\tREMOVING OBJ PATH: ./obj/$(NOC)"

fclean: clean
	@make -C $(LFT_PATH) fclean
	@rm -rf $(NAME)
	@echo "$(PUR)PIKACHU:\t\tPIKACHU EXECUTABLE REMOVED$(NOC)"
	@echo "$(GRE)=============$(WAC)===============$(ERC)===============$(OKC)===============$(NOC)"

re: fclean all
