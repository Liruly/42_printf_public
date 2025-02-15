NAME		=	libftprintf.a
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror 
SRCS		=	ft_printf.c \
			src/ft_printf_c.c \
			src/ft_printf_d.c \
			src/ft_printf_p.c \
			src/ft_printf_u.c \
			src/ft_printf_s.c \
			src/ft_printf_x.c \
			src/utils_1.c \
			src/utils_2.c
# BONUS_SRCS	=	

OBJS		=	$(SRCS:.c=.o)
# BONUS_OBJS	=	$(BONUS_SRCS:.c=.o)

LIBDIR		=	libft
LIB			=	libft.a

.DEFAULT_GOAL := all

# ifeq ($(filter bonus,$(MAKECMDGOALS)),bonus)
# 	SRCS += $(BONUS)
# 	OBJS += $(BONUS_OBJS)
# endif

all: $(NAME)

# bonus: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	cp $(LIBDIR)/$(LIB) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make fclean -C libft
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re #bonus
