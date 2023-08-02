/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdulkadi <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:35:23 by fdulkadi          #+#    #+#             */
/*   Updated: 2023/08/02 12:29:53 by fdulkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//.exe nin ayarları isim, derleme şekli vs.
NAME := bsq
CC := gcc
FLAGS := -Wall -Werror -Wextra
SRC_DIR := ./src/
OBJ_DIR := ./obj/
SRC_FILES := main.c\
	bsq.c\
	fonksiyonlar.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES)
OBJS = $(addprefix $(OBJ_DIR), $(OBJ_FILES)
HEADER := -I includes/
RM := rm -rf

all: obj $(NAME)

obj: $(SRC)
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(FLAGS) -o $(NAME) $(OBJS) $(HEADER)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

norm :
	norminette -R CheckForbiddenSourceHeader */*.c
