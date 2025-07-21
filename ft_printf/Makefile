NAME = libftprintf.a
FLAG = -Wall -Wextra -Werror
OPTION = -c -I
INCLUDE = libftprintf.h
SRC = ft_printf.c ft_printtype.c
OBJ = $(SRC:.c=.o)
BONUSSRC = 
BONUSOBJ = $(BONUSSRC:.c=.o)

# $< significa copiar el primero de los requisitos en el comando (ej. en %.o)
# $? copia TODOS los requisitos
# $@ copia el nombre de la regla

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	ar rcs $(NAME) $(OBJ)
%.o: %.c
	cc $(FLAG) -c $< -o $@
clean:
	/bin/rm -f $(OBJ) $(BONUSOBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

bonus: $(OBJ) $(BONUSOBJ) $(INCLUDE)
	ar rcs $(NAME) $(BONUSOBJ) $(OBJ)
	
rebonus: fclean bonus
