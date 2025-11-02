#.SILENT:

# Output Name
NAME = libft.a

# Memory Manipulation
MEM = \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_calloc.c

# String Manipulation
STR = \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_striteri.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_strdup.c 

# Char Manipulation
CHR = \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c

FD = \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

LST = \
		ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c \
		ft_lstdelone_bonus.c

SRCS = \
		$(MEM) \
		$(STR) \
		$(CHR) \
		$(FD)

# Compilation
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Object name
OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(LST:.c=.o)

#Rules
all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)

clean:
	rm -rf $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re bonus