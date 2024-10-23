# Nome da biblioteca
NAME = libft.a

# Compilador e flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Arquivos fontes e objetos
SRC = ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c \

# Adicione todos os arquivos .c necessários
OBJ = $(SRC:.c=.o)

# Regra principal: compilar tudo
all: $(NAME)

# Como criar a biblioteca
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Regra para compilar os arquivos .o a partir dos .c
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza dos arquivos objeto
clean:
	rm -f $(OBJ)

# Limpeza completa (inclui a biblioteca)
fclean: clean
	rm -f $(NAME)

# Recompilar do zero
re: fclean all

# Indica que não são arquivos reais
.PHONY: all clean fclean re
