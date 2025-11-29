.SILENT:


# **************************************************************************** #
#                                   COLORS                                     #
# **************************************************************************** #

GREEN   = \033[0;32m
RED     = \033[0;31m
YELLOW  = \033[0;33m
BLUE    = \033[0;34m
MAGENTA = \033[0;35m
CYAN    = \033[0;36m
RESET   = \033[0m

# **************************************************************************** #
#                                  VARIABLES                                   #
# **************************************************************************** #

# Output Name
NAME = libft.a

# Directories
OBJ_DIR = Obj

MEM = \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_calloc.c \
		ft_realloc.c

STR = \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_striteri.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_strmapi.c \
		ft_strdup.c

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
		ft_putnbr_fd.c	\
		ft_putnbr_base_u_fd.c


PRINTF = \
		ft_printf.c

MATHS = \
		ft_abs.c \
		ft_min.c \
		ft_max.c \
		ft_min_size.c \
		ft_max_size.c \


UTILS = \
		ft_atoi.c \
		ft_itoa.c \
		ft_check_base.c \
		ft_swap.c \
		ft_free_split.c

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

SRCS =	$(addprefix Mem/,$(MEM)) \
		$(addprefix Str/,$(STR)) \
		$(addprefix Char/,$(CHR)) \
		$(addprefix Fd/,$(FD)) \
		$(addprefix Maths/,$(MATHS)) \
		$(addprefix Utils/,$(UTILS)) \
		$(addprefix List/,$(LST)) \
		$(addprefix Printf/,$(PRINTF))

vpath %.c ./Mem:./Str:./Char:./Fd:./Maths:./List:./Utils:./Printf

INCLUDES = \
			libft.h \
			Char/libft_char.h \
			Mem/libft_mem.h \
			Str/libft_string.h \
			List/libft_list.h \
			Maths/libft_maths.h \
			Utils/libft_utils.h \
			Fd/libft_fd.h \
			Printf/libft_printf.h

# Compilation
CC = cc
CFLAGS = -Wall -Werror -Wextra -I.

# Object name
OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.c=.o)))

#
TOTAL := $(words $(OBJS))
CURRENT := 0

# **************************************************************************** #
#									Rules									   #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS)
	printf "$(CYAN)Création de la bibliothèque $(NAME)...$(RESET) "
	if ar -rcs $@ $(OBJS) 2>/dev/null; then \
		echo "$(GREEN)✓$(RESET)"; \
	else \
		echo "$(RED)✗$(RESET)"; \
		ar -rcs $@ $(OBJS); \
	fi

$(OBJ_DIR)/%.o: %.c $(INCLUDES) | $(OBJ_DIR)
	$(eval CURRENT=$(shell echo $$(($(CURRENT)+1))))
	printf "$(CYAN)[%2d/%2d]$(RESET) %-30s " $(CURRENT) $(TOTAL) $(notdir $<)
	if $(CC) $(CFLAGS) -c $< -o $@ 2>/dev/null; then \
		echo "$(GREEN)✓$(RESET)"; \
	else \
		echo "$(RED)✗$(RESET)"; \
		$(CC) $(CFLAGS) -c $< -o $@; \
	fi

$(OBJ_DIR):
	printf "$(CYAN)Création du répertoire $(OBJ_DIR)...$(RESET) "
	if mkdir -p $(OBJ_DIR) 2>/dev/null; then \
		echo "$(GREEN)✓$(RESET)"; \
	else \
		echo "$(RED)✗$(RESET)"; \
		mkdir -p $(OBJ_DIR); \
	fi

bonus: re

clean:
	printf "$(CYAN)Suppression de $(OBJ_DIR)...$(RESET) "
	if [ -d "$(OBJ_DIR)" ]; then \
		$(RM) -rf $(OBJ_DIR) && \
		echo "$(GREEN)✓ Fichiers objets supprimés$(RESET)"; \
	else \
		echo "$(YELLOW)⚠ Rien à nettoyer$(RESET)"; \
	fi

fclean: clean
	printf "$(CYAN)Suppression de $(NAME)...$(RESET) "
	if rm $(NAME) 2>/dev/null; then \
		echo "$(GREEN)✓$(RESET)"; \
	else \
		echo "$(YELLOW)⚠ Déjà supprimée$(RESET)"; \
	fi

testeur: fclean
	rm -rf libft-fairy && \
	git clone https://github.com/gcxd68/libft-fairy.git && \
	cd libft-fairy && ./run.sh; \
	cd .. && rm -rf libft-fairy; \
	rm -rf libftTester && \
	git clone https://github.com/Tripouille/libftTester.git && \
	cd libftTester && make; \
	cd .. && rm -rf libftTester;

re: fclean all

.PHONY: clean fclean re bonus testeur