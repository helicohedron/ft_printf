NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c handle_specifiers.c utils.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar -r $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	cc $(FLAGS) -c $< -o $@

all: $(NAME)

clean: rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f tester

re: fclean all