NAME=libft.a
LIB=libft.a
GCCEXE=gcc -Wall -Werror -Wextra
GCCLIB=-c
AR=ar rcs
DEBUG=-g
INC=-I libft.h
SRCS=ft_atoi.c\
	 ft_itoa.c\
	 ft_bzero.c\
	 ft_strcat.c\
	 ft_strchr.c\
	 ft_strclr.c\
	 ft_strcmp.c\
	 ft_strcpy.c\
	 ft_strdel.c\
	 ft_strdup.c\
	 ft_strequ.c\
	 ft_strlen.c\
	 ft_strnew.c\
	 ft_strstr.c\
	 ft_strsub.c\
	 ft_lstadd.c\
	 ft_memset.c\
	 ft_memcpy.c\
	 ft_memchr.c\
	 ft_memcmp.c\
	 ft_memdel.c\
	 ft_putstr.c\
	 ft_putnbr.c\
	 ft_strmap.c\
	 ft_lstnew.c\
	 ft_lstdel.c\
	 ft_lstmap.c\
	 ft_lstiter.c\
	 ft_strmapi.c\
	 ft_strjoin.c\
	 ft_strnequ.c\
	 ft_strtrim.c\
	 ft_striter.c\
	 ft_isdigit.c\
	 ft_isalnum.c\
	 ft_isascii.c\
	 ft_isalpha.c\
	 ft_isprint.c\
	 ft_toupper.c\
	 ft_tolower.c\
	 ft_putchar.c\
	 ft_putendl.c\
	 ft_strrchr.c\
	 ft_strncmp.c\
	 ft_strlcat.c\
	 ft_strncat.c\
	 ft_strncmp.c\
	 ft_strncpy.c\
	 ft_strnstr.c\
	 ft_memccpy.c\
	 ft_memmove.c\
	 ft_strsplit.c\
	 ft_memalloc.c\
	 ft_striteri.c\
	 ft_putnbr_fd.c\
	 ft_putstr_fd.c\
	 ft_lstdelone.c\
	 ft_putchar_fd.c\
	 ft_putendl_fd.c\
	 ft_strrev.c\
	 ft_list_size.c\
	 ft_create_elem.c\
	 ft_list_reverse.c\
	 ft_list_push_back.c\
	 ft_list_push_front.c
OBJ= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(GCCEXE) $(GCCLIB) $(SRCS)
	@$(AR) $(LIB) $(OBJ)

debug: $(OBJ)
	@$(GCCEXE) $(GCCLIB) $(SRCS) $(DEBUG)
	@$(AR) $(LIB) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
