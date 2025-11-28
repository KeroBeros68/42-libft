Libft

Libft est une bibliothèque personnelle en C regroupant des fonctions utilitaires réutilisables pour la manipulation de chaînes, caractères, mémoire, listes et autres opérations courantes. Développée dans le cadre du cursus 42, elle respecte les normes de codage strictes (Norminette).

📂 Structure du projet
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


Chaque sous-dossier contient un header .h et ses fichiers .c associés.

Le header principal libft.h inclut tous les modules pour simplifier l’inclusion.

⚙️ Installation

Cloner le dépôt :

git clone <url_du_dépôt>
cd libft


Compiler la bibliothèque :

make


Génère la bibliothèque statique libft.a.

Nettoyer les fichiers objets :

make clean      # supprime les fichiers .o
make fclean     # supprime .o et libft.a
make re         # supprime et recompiles

📝 Utilisation

Inclure le header principal :

#include "libft.h"


Compiler et lier la bibliothèque :

gcc main.c -L. -lft -o main

💡 Exemples

Exemple 1 : Calcul de la longueur d’une chaîne

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, Libft!";
    printf("Length: %zu\n", ft_strlen(str));
    return 0;
}


Exemple 2 : Ajout d’un nœud en tête d’une liste

#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *list = ft_lstnew("first");
    ft_lstadd_front(&list, ft_lstnew("new head"));
    printf("Head: %s\n", (char *)list->content);
    return 0;
}

📦 Modules et fonctions principales
Module	Fonctions principales
Char	ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower
Str	ft_strlen, ft_strdup, ft_strcpy, ft_strjoin, ft_strchr, ft_strrchr, ft_strncmp, ft_substr, ft_strtrim, ft_split
Fd	ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd
List	ft_lstnew, ft_lstadd_front, ft_lstadd_back, ft_lstlast, ft_lstsize, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap
Mem	ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc
Maths	ft_abs, ft_max, ft_min, ft_pow
Utils	ft_swap, ft_itoa, ft_atol, ft_strcmp, ft_free_split
📌 Bonnes pratiques

Respect strict des normes 42 (Norminette).

Documentation complète pour chaque fonction.

Tests unitaires recommandés pour chaque module.

Chaque module a son propre header pour faciliter maintenance et extension.

👤 Auteur

Développé par Kevin Bertrand pour le cursus 42.

Contact : kevinbertrand68.pro@gmail.com
