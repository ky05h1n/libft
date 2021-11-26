NAME = libft.a

SRCS    = ft_atoi.c \
		  ft_memcmp.c \
		  ft_isalnum.c \
		  ft_isdigit.c \
		  ft_memcpy.c \
		  ft_strchr.c \
		  ft_strlen.c \
		  ft_strrchr.c \
		  ft_isalpha.c \
		  ft_isprint.c \
		  ft_memmove.c \
		  ft_strlcat.c \
		  ft_strncmp.c \
		  ft_substr.c \
		  ft_tolower.c \
		  ft_bzero.c \
		  ft_memchr.c \
		  ft_isascii.c \
		  ft_memset.c \
		  ft_strlcpy.c \
		  ft_strnstr.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_strjoin.c \
		  ft_split.c \

OBJS    = $(SRCS:.c=.o)

ICLS    = libft.h

GCC        = gcc

FLGS    = -Wall -Wextra -Werror

LIB1    = ar -rcs

LIB2    = ranlib

RM        = rm -f

all:        $(NAME)

$(NAME):	$(OBJS)
			$(LIB1) $(NAME) $(OBJS)
			$(LIB2) $(NAME)

bonus:      $(NAME) $(BONUS_O)
			$(LIB1) $(NAME) $(BONUS_O)
			$(LIB2) $(NAME)

.c.o:
			$(GCC) $(FLGS) -I $(ICLS) -c $<

clean:
			$(RM) $(OBJS) $(BONUS_O)

fclean:        clean
			$(RM) $(NAME)

re:            fclean all
