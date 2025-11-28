Libft

Libft est une bibliothèque personnelle en C regroupant des fonctions utilitaires réutilisables pour la manipulation de chaînes, caractères, mémoire, listes et autres opérations courantes. Développée dans le cadre du cursus 42, elle respecte les normes de codage strictes (Norminette).

Structure du projet
libft/
├── Makefile
├── libft.h
├── Char/
│   ├── *.c
│   └── Char.h
├── Str/
│   ├── *.c
│   └── Str.h
├── Fd/
│   ├── *.c
│   └── Fd.h
├── List/
│   ├── *.c
│   └── List.h
├── Mem/
│   ├── *.c
│   └── Mem.h
├── Maths/
│   ├── *.c
│   └── Maths.h
└── Utils/
    ├── *.c
    └── Utils.h


Chaque sous-dossier contient un .h et ses fichiers .c associés.

libft.h inclut tous les headers pour simplifier l’inclusion dans vos projets.

Installation

Cloner le dépôt :

git clone <url_du_dépôt>
cd libft


Compiler la bibliothèque :

make


Génère libft.a, la bibliothèque statique.

Nettoyer les fichiers objets :

make clean      # supprime les fichiers .o
make fclean     # supprime .o et libft.a
make re         # supprime et recompiles

Utilisation

Inclure le header principal :

#include "libft.h"


Compiler et lier la bibliothèque :

gcc main.c -L. -lft -o main

Exemples d’utilisation

Exemple 1 : utilisation de ft_strlen

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, Libft!";
    printf("Length: %zu\n", ft_strlen(str));
    return 0;
}


Exemple 2 : ajout d’un nœud en tête d’une liste

#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *list = ft_lstnew("first");
    ft_lstadd_front(&list, ft_lstnew("new head"));
    printf("Head: %s\n", (char *)list->content);
    return 0;
}

Contenu par module
Module	Fonctions principales
Char	ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower
Str	ft_strlen, ft_strdup, ft_strcpy, ft_strjoin, ft_strchr, ft_strrchr, ft_strncmp, ft_substr, ft_strtrim, ft_split
Fd	ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd, ft_putnbr_base_u_fd
List	ft_lstnew, ft_lstadd_front, ft_lstadd_back, ft_lstlast, ft_lstsize, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap
Mem	ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc, ft_realloc
Maths	ft_max, ft_min, ft_min_size, ft_max_size
Utils	ft_check_base
Bonnes pratiques

Respect strict des normes 42 (Norminette).

Documentation claire pour chaque fonction.

Chaque module possède son propre header pour faciliter maintenance et extension.

Tests unitaires recommandés pour chaque fonction (pile, chaînes, mémoire…).

Auteur

Développé par Kevin Bertrand pour le cursus 42.

Contact : kevinbertrand68.pro@gmail.com