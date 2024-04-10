NAME = minitalk

CLIENT_NAME = client

SERVER_NAME = server

CLIENT_NAME_BONUS = client_bonus

SERVER_NAME_BONUS = server_bonus

CLIENT_SRC = client.c \

SERVER_SRC = server.c \

CLIENT_SRC_BONUS = client_bonus.c \

SERVER_SRC_BONUS = server_bonus.c \

CLIENT_OBJ = $(CLIENT_SRC:.c=.o)

SERVER_OBJ = $(SERVER_SRC:.c=.o)

CLIENT_OBJ_BONUS = $(CLIENT_SRC_BONUS:.c=.o)

SERVER_OBJ_BONUS = $(SERVER_SRC_BONUS:.c=.o)

LIBFT = libft/libft.a \

PRINTF = ft_printf/libftprintf.a \

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

all : $(NAME)

$(NAME) : $(CLIENT_NAME) $(SERVER_NAME)

bonus: $(CLIENT_NAME_BONUS) $(SERVER_NAME_BONUS)

$(CLIENT_NAME) : $(CLIENT_OBJ)
	@make bonus -sC libft
	@make -sC ft_printf
	$(CC) $(CFLAGS) $(CLIENT_OBJ) $(LIBFT) $(PRINTF) -o $(CLIENT_NAME)

$(SERVER_NAME): $(SERVER_OBJ)
	@make bonus -sC libft
	@make -sC ft_printf
	$(CC) $(CFLAGS) $(SERVER_OBJ) $(LIBFT) $(PRINTF) -o $(SERVER_NAME)

$(CLIENT_NAME_BONUS): $(CLIENT_OBJ_BONUS)
	@make bonus -sC libft
	@make -sC ft_printf
	$(CC) $(CFLAGS) $(CLIENT_OBJ_BONUS) $(LIBFT) $(PRINTF) -o $(CLIENT_NAME_BONUS)

$(SERVER_NAME_BONUS): $(SERVER_OBJ_BONUS)
	@make bonus -sC libft
	@make -sC ft_printf
	$(CC) $(CFLAGS) $(SERVER_OBJ_BONUS) $(LIBFT) $(PRINTF) -o $(SERVER_NAME_BONUS)

clean :
	@make clean -sC libft
	@make clean -sC ft_printf
	rm -rf $(CLIENT_OBJ)
	rm -rf $(SERVER_OBJ)
	rm -rf $(CLIENT_OBJ_BONUS)
	rm -rf $(SERVER_OBJ_BONUS)


fclean : clean
	@make fclean -sC libft
	@make fclean -sC ft_printf
	rm -rf $(NAME) $(CLIENT_NAME) $(SERVER_NAME)
	rm -rf $(NAME) $(CLIENT_NAME_BONUS) $(SERVER_NAME_BONUS)

re : fclean all

.PHONY : all clean fclean libft printf re bonus