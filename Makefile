
SRCS	= ft_atoi.c ft_isalpha.c ft_itoa.c ft_memcpy.c ft_putendl_fd.c
SRCS	+= ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c ft_bzero.c
SRCS	+= ft_isascii.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c
SRCS	+= ft_strnstr.c ft_tolower.c ft_calloc.c ft_isdigit.c ft_memchr.c
SRCS	+= ft_memset.c ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strrchr.c
SRCS	+= ft_toupper.c ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c
SRCS	+= ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c

SRCSBONUS	= ft_lstadd_back.c ft_lstiter.c ft_lstsize.c ft_lstdelone.c
SRCSBONUS	+= ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstclear.c
SRCSBONUS	+= ft_lstmap.c

OBJS	= ${SRCS:.c=.o}

OBJSBONUS	= ${SRCSBONUS:.c=.o}

NAME	= libft.a

CC		= clang
AR		= ar
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror
AFLAGS	= rc

.c.o:
			${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
			${AR} ${AFLAGS} ${NAME} ${OBJS}

all:		${NAME}

bonus:		${OBJSBONUS}
			${AR} ${AFLAGS} ${NAME} ${OBJSBONUS}

clean:
			${RM} ${OBJS} ${OBJSBONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
