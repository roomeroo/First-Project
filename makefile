
NAME = main.c

SRC =	hello.c

OBJ=	$(SRC:.c=.o)

CFLAGS = 	-Wall -Werror -Wextra

all:		$(NAME)
	mkdir setup
$(NAME):
	gcc -c $(CFLAGS) $(SRC)
	ar rcs $(NAME) $(OBJT)

clean:
	@echo "Borrando archivos objeto..."
	rm -rf *.o
	@echo "Borrados"

fclean:	clean
	@echo "Borrando todo..."
	@rm -rf $(NAME) setup
	@echo "Todo limpio!"
re:	fclean all

.PHONY: all clean fclean bonus re
