# Libft

Libft est une bibliothèque C personnelle regroupant des fonctions utilitaires réutilisables pour la manipulation de chaînes, de mémoire, de listes et d'opérations courantes. Elle est conçue pour être claire, modulaire et conforme aux normes 42 (Norminette).

---

## Table des matières

- [Présentation](#présentation)  
- [Structure du projet](#structure-du-projet)  
- [Installation](#installation)  
- [Utilisation](#utilisation)  
- [Exemples](#exemples)  
- [Modules et fonctions principales](#modules-et-fonctions-principales)  
- [Bonnes pratiques & tests](#bonnes-pratiques--tests)  
- [Auteur & contact](#auteur--contact)

---

## Présentation

Cette bibliothèque propose des fonctions courantes ré-implémentées en C, utiles pour des projets pédagogiques ou des petits projets personnels : manipulation de chaînes, gestion de mémoire, opérations sur listes chaînées, E/S simplifiées, etc.

---

## Structure du projet

La bibliothèque est organisée en modules pour faciliter la maintenance et la lecture :

```
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
```

Le header principal `libft.h` inclut les headers de chaque module pour faciliter l'inclusion dans vos projets.

---

## Installation

Cloner le dépôt :

```bash
git clone https://github.com/KeroBeros68/42-libft.git
cd 42-libft
```

Compiler la bibliothèque :

```bash
make
```

Les cibles Make utiles :

- `make` : compile et crée `libft.a`
- `make clean` : supprime les fichiers objets (`*.o`)
- `make fclean` : supprime les fichiers objets et `libft.a`
- `make re` : exécute `fclean` puis `make`

---

## Utilisation

Inclure le header principal dans votre code :

```c
#include "libft.h"
```

Compiler et lier la bibliothèque lors de la construction de votre exécutable :

```bash
gcc main.c -L. -lft -o main
```

Ou en précisant l'archive directement :

```bash
gcc main.c libft.a -o main
```

---

## Exemples

Exemple 1 — Calcul de la longueur d'une chaîne :

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, Libft!";
    printf("Length: %zu\n", ft_strlen(str));
    return 0;
}
```

Exemple 2 — Ajout d'un nœud en tête d'une liste :

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *list = ft_lstnew("first");
    ft_lstadd_front(&list, ft_lstnew("new head"));
    printf("Head: %s\n", (char *)list->content);
    ft_lstclear(&list, free);
    return 0;
}
```

---

## Modules et fonctions principales

Voici un aperçu des modules et de leurs fonctions les plus courantes :

| Module | Fonctions principales |
|---|---|
| Char | ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower |
| Str | ft_strlen, ft_strdup, ft_strcpy, ft_strjoin, ft_strchr, ft_strrchr, ft_strncmp, ft_substr, ft_strtrim, ft_split |
| Fd | ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd, ft_putnbr_base_u_fd |
| List | ft_lstnew, ft_lstadd_front, ft_lstadd_back, ft_lstlast, ft_lstsize, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap |
| Mem | ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc, ft_realloc |
| Maths | ft_abs, ft_max, ft_min, ft_max_size, ft_min_size, ft_pow in progress|
| Utils | ft_swap, ft_itoa, ft_atoi, ft_strcmp, ft_free_split, ft_check_base |

Chaque module possède son propre header (ex. `Str/libft_str.h`) et ses fichiers sources pour faciliter la maintenance.

---

## Bonnes pratiques & tests

- Respect strict des normes 42 (Norminette).
- Documenter chaque fonction (prototype, comportement, valeurs de retour).
- Écrire des tests unitaires pour chaque module (ex: utiliser un petit framework de test ou des programmes de test standalone).
- Ajouter des exemples d'utilisation dans un dossier `examples/` (optionnel mais recommandé).

---

## Auteur & contact

Développé par Kevin Bertrand (KeroBeros68) pour le cursus 42.  
Contact : kevinbertrand68.pro@gmail.com

---

Licence : libre d'utilisation à des fins pédagogiques. (Ajouter un fichier LICENSE si nécessaire).